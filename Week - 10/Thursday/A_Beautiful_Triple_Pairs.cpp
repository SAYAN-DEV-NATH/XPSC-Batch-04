// Creator: SAYAN-DEV-NATH
// Created: 2024-05-31 00:16:57
#include <bits/stdc++.h> // Essential header files lines(3-4)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> // Policy Based Data Structure lines(5-9)
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        map<tuple<int, int, int>, int> cnt;
        long long ans = 0;

        for (int i = 0; i < n - 2; ++i)
        {
            tuple<int, int, int> three = make_tuple(a[i], a[i + 1], a[i + 2]);
            tuple<int, int, int> two[3];
            two[0] = make_tuple(0, a[i + 1], a[i + 2]);
            two[1] = make_tuple(a[i], 0, a[i + 2]);
            two[2] = make_tuple(a[i], a[i + 1], 0);

            for (int j = 0; j < 3; ++j)
            {
                ans += cnt[two[j]] - cnt[three];
                cnt[two[j]]++;
            }
            cnt[three]++;
        }
        cout << ans << endl;
    }

    return 0;
}
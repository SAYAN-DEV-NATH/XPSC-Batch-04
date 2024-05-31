// Creator: SAYAN-DEV-NATH
// Created: 2024-05-31 20:40:22
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll sum = 0, cnt_1 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] == 1)
                cnt_1++;
        }
        (sum >= cnt_1 + n && n > 1) ? yes : no;
    }

    return 0;
}
// Creator: SAYAN-DEV-NATH
// Created: 2024-06-04 23:21:13
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
        string s;
        cin >> n >> s;
        ll val = 0;

        map<ll, ll> sum;
        sum[0]++;
        ll ans = n * (n + 1) / 2;
        for (auto e : s)
        {
            (e == '1') ? val++ : val--;
            ans += sum[val]++;
        }
        cout << ans << endl;
    }

    return 0;
}
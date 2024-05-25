// Creator: SAYAN-DEV-NATH
// Created: 2024-05-25 22:40:18
#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll ans = 0;
        pbds<ll> p;
        for (ll i = n - 1; i >= 0; i--)
        {
            ans += p.order_of_key(a[i]);
            p.insert(a[i]);
        }
        cout << ans << endl;
    }

    return 0;
}
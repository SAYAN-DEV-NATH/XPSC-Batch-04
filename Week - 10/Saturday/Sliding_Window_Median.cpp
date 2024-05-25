// Creator: SAYAN-DEV-NATH
// Created: 2024-05-25 21:34:11
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

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0;
    pbds<pair<ll, ll>> p;
    while (r < n)
    {
        p.insert({a[r], r});
        if (r - l + 1 == k)
        {
            ll pos = k / 2;
            if (k % 2 == 0)
                pos--;
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({a[l], l});
            l++;
        }
        r++;
    }
    return 0;
}
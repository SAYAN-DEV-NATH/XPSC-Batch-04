// Creator: SAYAN-DEV-NATH
// Created: 2024-05-25 21:20:50
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    pbds<ll> p;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        p.insert(x);
    }
    while (m--)
    {
        ll x;
        cin >> x;
        cout << p.order_of_key(x + 1) << " ";
    }
    return 0;
}
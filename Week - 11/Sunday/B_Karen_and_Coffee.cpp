// Creator: SAYAN-DEV-NATH
// Created: 2024-06-02 23:25:45
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

    ll n, k, q;
    cin >> n >> k >> q;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    return 0;
}
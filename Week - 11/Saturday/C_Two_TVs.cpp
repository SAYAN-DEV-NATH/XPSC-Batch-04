// Creator: SAYAN-DEV-NATH
// Created: 2024-06-01 12:23:28
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

    ll n;
    cin >> n;
    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        ll l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r + 1]--;
    }

    ll sum = 0;
    bool flag = true;
    for (auto &[i, v] : mp)
    {
        sum += v;
        if (sum > 2)
        {
            flag = false;
            break;
        }
    }
    (flag) ? yes : no;

    return 0;
}
// Creator: SAYAN-DEV-NATH
// Created: 2024-06-01 12:13:17
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

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll> d(n);
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        d[l - 1] += 1;
        if (r < n)
            d[r] -= 1;
    }
    for (ll i = 1; i < n; i++)
        d[i] += d[i - 1];

    sort(a.begin(), a.end());
    sort(d.begin(), d.end());
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        sum += (a[i] * d[i]);
    }
    cout << sum << endl;

    return 0;
}
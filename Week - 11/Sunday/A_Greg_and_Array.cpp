// Creator: SAYAN-DEV-NATH
// Created: 2024-06-02 16:19:10
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

    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    vector<tuple<ll, ll, ll>> b(m);
    for (ll i = 0; i < m; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        b[i] = make_tuple(x - 1, y - 1, z);
    }
    vector<ll> oper_cnt(m + 1, 0);
    for (ll i = 0; i < k; i++)
    {
        ll x, y;
        cin >> x >> y;
        oper_cnt[x - 1]++;
        if (y < m)
            oper_cnt[y]--;
    }
    for (ll i = 1; i < m; i++)
        oper_cnt[i] += oper_cnt[i - 1];

    vector<ll> d(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        ll x = get<0>(b[i]);
        ll y = get<1>(b[i]);
        ll z = get<2>(b[i]);
        d[x] += oper_cnt[i] * z;
        if (y + 1 < n)
            d[y + 1] -= oper_cnt[i] * z;
    }
    for (ll i = 1; i < n; i++)
        d[i] += d[i - 1];
    for (ll i = 0; i < n; i++)
    {
        a[i] += d[i];
        cout << a[i] << " ";
    }
    cout << '\n';

    return 0;
}
#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    vector<vector<ll>> cnt;
    vector<ll> store;
    for (ll i = 0; i < n; ++i)
    {
        cin >> a[i];
        (a[i] > 0) ? sum += a[i] : sum -= a[i];
        if (a[i] <= 0)
        {
            if (a[i] != 0)
                store.pb(a[i]);
        }
        else
        {
            if (!store.empty())
                cnt.pb(store);
            store.clear();
        }
    }
    if (!store.empty())
        cnt.pb(store);
    cout << sum << " " << cnt.size() << endl;
    store.clear();
    cnt.clear();
    a.clear();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
// Creator: Sayan Dev Nath
// Created: 05-04-2024  21:14:56
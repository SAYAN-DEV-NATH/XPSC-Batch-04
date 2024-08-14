// Creator: SAYAN-DEV-NATH
// Created: 2024-08-14 06:50:10
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
#define pb push_back
#define fi first
#define se second
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
    }

    return 0;
}
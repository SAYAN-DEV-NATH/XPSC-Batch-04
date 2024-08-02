// Creator: SAYAN-DEV-NATH
// Created: 2024-08-02 13:04:21
#include <bits/stdc++.h>
using namespace std;
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
        vector<ll> a(n), b(n + 1);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n + 1; i++)
            cin >> b[i];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
            ans += abs(a[i] - b[i]);
        ans++;
        ll mn = INT_MAX;
        for (ll i = 0; i < n; i++)
        {
            mn = min(mn, min(abs(b[n] - b[i]), abs(b[n] - a[i])));
            ll x = min(a[i], b[i]);
            ll y = max(a[i], b[i]);
            if (b[n] >= x && b[n] <= y)
                mn = 0;
        }
        ans += mn;
        cout << ans << endl;
    }

    return 0;
}
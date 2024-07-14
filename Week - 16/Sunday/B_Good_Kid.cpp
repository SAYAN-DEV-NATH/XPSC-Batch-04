// Creator: SAYAN-DEV-NATH
// Created: 2024-07-14 21:52:01
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
const char nl = '\n';
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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        ll ans = 1;
        a[0]++;
        for (int i = 0; i < n; i++)
            ans *= a[i];
        cout << ans << nl;
    }

    return 0;
}
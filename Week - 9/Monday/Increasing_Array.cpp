// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 14:21:53
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ans += (a[i - 1] - a[i]);
            a[i] = a[i - 1];
        }
    }
    cout << ans << '\n';
    return 0;
}
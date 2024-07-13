// Creator: SAYAN-DEV-NATH
// Created: 2024-07-13 21:41:50
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll cost = 0, maxDiff = 0;
        for (ll i = 1; i < n; i++)
        {
            if (a[i] < a[i - 1])
            {
                cost += a[i - 1] - a[i];
                maxDiff = max(maxDiff, a[i - 1] - a[i]);
                a[i] = a[i - 1];
            }
        }
        cost += maxDiff;
        cout << cost << nl;
    }

    return 0;
}
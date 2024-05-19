// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 23:28:42
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll a, b;
        cin >> a >> b;
        ll x = (a + b) % 3;
        ll mn = min(a, b) * 2;
        ll mx = max(a, b);
        ((x == 0) && mn >= mx) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
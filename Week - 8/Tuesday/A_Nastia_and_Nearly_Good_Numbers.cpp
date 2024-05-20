// Creator: SAYAN-DEV-NATH
// Created: 2024-05-20 08:25:01
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
        if (b == 1)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            cout << a << ' ' << a * b << ' ' << a * (b + 1) << '\n';
        }
    }

    return 0;
}
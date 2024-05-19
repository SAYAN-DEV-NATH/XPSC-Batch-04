// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 23:21:05
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
        if (a > b)
        {
            if (a % 2 == 0)
                cout << (a * a) - (b - 1);
            else
                cout << (a - 1) * (a - 1) + b;
        }
        else
        {
            if (b % 2 == 0)
                cout << (b - 1) * (b - 1) + (a);
            else
                cout << (b * b) - (a - 1);
        }
        cout << endl;
    }

    return 0;
}
// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 23:11:02
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

    if (n == 1 || n <= 3)
        (n == 1) ? cout << n << endl : cout << "NO SOLUTION\n";
    else
    {
        vector<ll> a, b;
        for (ll i = 1; i <= n; i++)
            (i % 2 == 0) ? a.push_back(i) : b.push_back(i);
        for (auto &i : a)
            cout << i << " ";
        for (auto &i : b)
            cout << i << " ";
    }

    return 0;
}
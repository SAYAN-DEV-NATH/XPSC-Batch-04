// File: B_Interesting_drink
// Author: _Sayan_Dev_Nath_
// Created: 21-04-2024  09:09:26
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    ll q;
    cin >> q;

    while (q--)
    {
        ll x;
        cin >> x;
        auto it = upper_bound(a.begin(), a.end(), x);
        cout << it - a.begin() << endl;
    }
    return 0;
}
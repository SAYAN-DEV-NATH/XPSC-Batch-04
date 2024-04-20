// File: D_Fast_search
// Author: _Sayan_Dev_Nath_
// Created: 20-04-2024  20:20:30
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto x = lower_bound(a.begin(), a.end(), l);
        auto y = upper_bound(a.begin(), a.end(), r);
        cout << (y - a.begin()) - (x - a.begin()) << " ";
    }
    return 0;
}
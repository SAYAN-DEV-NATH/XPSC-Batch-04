#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    for (int i = n; i >= 1; --i)
        cout << i << " ";
    cout << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
// Creator: Sayan Dev Nath
// Created: 06-04-2024  23:57:20
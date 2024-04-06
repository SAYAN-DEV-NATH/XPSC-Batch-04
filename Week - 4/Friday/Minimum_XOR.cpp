#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum ^= a[i];
    }
    ll mn = INT_MAX;
    mn = min(sum, mn);
    for (int i = 0; i < n; i++)
    {
        mn = min(mn, sum ^ a[i]);
    }
    cout << mn << endl;
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
// Created: 06-04-2024  23:47:15
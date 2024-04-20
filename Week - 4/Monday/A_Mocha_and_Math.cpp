#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll result = a[0];
    for (int i = 1; i < n; i++)
        result &= a[i];

    cout << result << endl;
}
int main()
{
    // File:    A_Mocha_and_Math
    // Author:  Sayan Dev Nath
    // Created: 20-04-2024  07:58:45
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();
    return 0;
}
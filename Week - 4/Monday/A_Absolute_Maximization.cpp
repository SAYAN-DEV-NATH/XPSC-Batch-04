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
    ll AND = -1, OR = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        AND &= a[i];
        OR |= a[i];
    }
    cout << OR - AND << endl;
}
int main()
{
    // File:    A_Absolute_Maximization
    // Author:  Sayan Dev Nath
    // Created: 20-04-2024  09:07:20
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();
    return 0;
}
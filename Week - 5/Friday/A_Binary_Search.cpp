#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    while (q--)
    {
        ll k;
        cin >> k;
        ll l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            ll m = (l + r) / 2;
            if (k == a[m])
            {
                flag = true;
                break;
            }
            else if (k < a[m])
                r = m - 1;
            else
                l = m + 1;
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
}
int main()
{
    // File:    A_Binary_Search
    // Author:  Sayan Dev Nath
    // Created: 19-04-2024  22:00:41
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();
    return 0;
}

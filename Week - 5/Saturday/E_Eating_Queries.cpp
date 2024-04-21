#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), pre(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    pre[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    while (q--)
    {
        int x;
        cin >> x;
        ll l = 0, r = n - 1, ans = -1;
        while (l <= r)
        {
            ll m = (l + r) / 2;
            if (x <= pre[m])
            {
                ans = m;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        if (ans == -1)
            cout << -1 << endl;
        else
            cout << ans + 1 << endl;
    }
}
int main()
{
    // File:    E_Eating_Queries
    // Author:  Sayan Dev Nath
    // Created: 21-04-2024  08:48:37
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();
    return 0;
}
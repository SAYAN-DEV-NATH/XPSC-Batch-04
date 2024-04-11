#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    int cnt = 0;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= q)
            cnt++;
        else
            cnt = 0;
        ans += max(0, cnt - k + 1);
    }
    cout << ans << endl;
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
// Created: 10-04-2024  08:36:02
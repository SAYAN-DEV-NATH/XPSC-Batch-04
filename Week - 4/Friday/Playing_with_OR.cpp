#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    int ans = 0, l = 0, r = 0, cnt = 0;
    while (r < n)
    {
        ans |= a[r];
        if (r - l + 1 == k)
        {
            if (ans % 2 != 0)
                cnt++;
            ans -= a[l];
            l++;
        }
        r++;
    }
    cout << cnt << endl;
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
// Created: 07-04-2024  00:02:53
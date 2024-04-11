#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    map<int, int> cnt;
    set<int> b;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        cnt[x]++;
        b.insert(x);
        b.insert(x + 1);
    }
    int last = 0;
    int res = 0;
    for (auto x : b)
    {
        int c = cnt[x];
        res += max(0, c - last);
        last = c;
    }
    cout << res << '\n';
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
// Created: 10-04-2024  07:59:52
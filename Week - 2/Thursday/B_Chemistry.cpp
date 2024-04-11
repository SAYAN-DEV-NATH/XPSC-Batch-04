#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(26, 0);
    for (char &c : s)
        a[c - 'a']++;
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] % 2 != 0)
            cnt++;
    }
    if (k + 1 >= cnt)
        cout << "YES\n";
    else
        cout << "NO\n";
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
// Created: 09-04-2024  08:18:33
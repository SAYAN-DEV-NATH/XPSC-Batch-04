// Creator: SAYAN-DEV-NATH
// Created: 2024-09-06 22:32:40
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
#define pb push_back
#define fi first
#define se second
#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    string s;
    cin >> s;

    vector<int> dp(s.length() + 1, 0);
    ll c = 0, tot = 0, ans = 0;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == 'v' && s[i] == 'v')
            tot++;
    }

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == 'v' && s[i] == 'v')
            c++;
        if (s[i] == 'o')
            ans += c * (tot - c);
    }
    cout << ans;

    return 0;
}
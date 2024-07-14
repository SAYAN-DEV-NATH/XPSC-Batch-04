// Creator: SAYAN-DEV-NATH
// Created: 2024-07-14 21:58:42
#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
const char nl = '\n';
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int cnt = 0;
        string s, tmp = "abc";
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            if (s[i] != tmp[i])
                cnt++;
        }
        (cnt <= 2) ? yes : no;
    }

    return 0;
}
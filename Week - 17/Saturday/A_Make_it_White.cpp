// Creator: SAYAN-DEV-NATH
// Created: 2024-08-17 07:25:34
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

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        deque<char> s;
        for (int i = 0; i < n; i++)
        {
            char ch;
            cin >> ch;
            s.push_back(ch);
        }
        while (!s.empty() && s.front() == 'W')
            s.pop_front();
        while (!s.empty() && s.back() == 'W')
            s.pop_back();
        cout << s.size() << nl;
    }

    return 0;
}
// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 23:30:22
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    string s;
    cin >> s;
    vector<int> v(26);
    for (char &c : s)
    {
        v[c - 'A']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; ++i)
    {
        cnt += v[i] % 2;
    }
    if (cnt > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string ans;
    for (int i = 0; i < 26; ++i)
    {
        if (!(v[i] % 2))
        {
            for (int j = 0; j < v[i] / 2; ++j)
            {
                ans.push_back(i + 'A');
            }
        }
    }
    for (int i = 0; i < 26; ++i)
    {
        if (v[i] % 2)
        {
            for (int j = 0; j < v[i]; ++j)
            {
                ans.push_back(i + 'A');
            }
        }
    }
    for (int i = 25; i >= 0; --i)
    {
        if (!(v[i] % 2))
        {
            for (int j = 0; j < v[i] / 2; ++j)
            {
                ans.push_back(i + 'A');
            }
        }
    }
    cout << ans << endl;
    return 0;
}
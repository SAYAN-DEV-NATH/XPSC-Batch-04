// Creator: SAYAN-DEV-NATH
// Created: 2024-08-02 08:11:26
#include <bits/stdc++.h>
using namespace std;
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
        string s;
        cin >> s;
        vector<char> ans;
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            if (ans.size() == 0)
                ans.push_back(s[i]);
            else if (ans.back() == 'A' && s[i] == 'B')
                ans.pop_back();
            else if (ans.back() == 'B' && s[i] == 'B')
                ans.pop_back();
            else
                ans.push_back(s[i]);
        }
        cout << ans.size() << endl;
    }

    return 0;
}
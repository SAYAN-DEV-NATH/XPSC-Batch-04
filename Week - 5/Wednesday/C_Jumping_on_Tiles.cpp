#include <bits/stdc++.h> // 25-04-2024  12:35:51
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        string s;
        cin >> s;

        int n = s.size();
        map<char, vector<int>> mp;

        for (int i = 0; i < n; ++i)
        {
            mp[s[i]].push_back(i);
        }

        int d = (s[0] < s[n - 1]) ? 1 : -1;
        vector<int> ans;

        for (char c = s[0]; c != s[n - 1] + d; c += d)
        {
            for (auto c : mp[c])
            {
                ans.push_back(c);
            }
        }

        int cst = 0;
        for (int i = 1; i < ans.size(); i++)
            cst += abs(s[ans[i]] - s[ans[i - 1]]);

        cout << cst << " " << ans.size() << '\n';
        for (auto c : ans)
        {
            cout << c + 1 << " ";
        }
        cout << '\n';
    }

    return 0;
}
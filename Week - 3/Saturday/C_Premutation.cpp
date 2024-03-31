//  Creator: Sayan Dev Nath
//  Created: 2024-03-31   18:56:41
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mat[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
                cin >> mat[i][j];
        }

        unordered_map<int, int> mp;
        vector<int> ans;
        int a = 0, b = 0;

        for (int j = 0; j < n - 1; j++)
        {
            for (int i = 0; i < n; i++)
                mp[mat[i][j]]++;

            for (auto &c : mp)
            {
                if (c.second == n - 1)
                {
                    if (a == 0)
                        a = c.first;
                    else if (a == c.first)
                        continue;
                    else
                        b = c.first;
                }
                else
                    b = c.first;
            }
            ans.push_back(a);
            mp.erase(a);
            a = b;
            b = 0;
        }
        ans.push_back(a);
        for (int &c : ans)
            cout << c << " ";
        cout << '\n';
        ans.clear();
        mp.clear();
    }

    return 0;
}
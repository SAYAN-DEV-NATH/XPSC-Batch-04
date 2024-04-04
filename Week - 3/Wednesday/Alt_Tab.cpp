//  Creator: Sayan Dev Nath
//  Created: 03-04-2024  19:15:28
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    unordered_map<string, int> mp;
    string ans = "";
    for (int i = n - 1; i >= 0; --i)
    {
        string x = v[i];
        if (mp.find(x) != mp.end())
            continue;
        else
        {
            int y = x.size();
            ans += x.substr(y - 2, 2);
            mp[x]++;
        }
    }
    cout << ans << '\n';

    return 0;
}
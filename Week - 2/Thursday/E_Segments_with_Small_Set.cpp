//  Creator: Sayan Dev Nath
//  Created: 2024-03-29   08:38:23
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> mp;
    int l = 0, r = 0, cnt = 0, sum = 0;
    while (r < n)
    {
        mp[v[r]]++;
        if (mp[v[r]] == 1)
            sum++;
        if (sum <= k)
        {
            if (sum != 0)
                cnt += r - l + 1;
            r++;
        }
        else
        {
            while (sum > k)
            {
                if (mp[v[l]] == 1)
                    sum--;
                mp[v[l]]--;
                l++;
            }
            if (sum != 0)
                cnt += r - l + 1;
            r++;
        }
    }
    cout << cnt << endl;

    return 0;
}
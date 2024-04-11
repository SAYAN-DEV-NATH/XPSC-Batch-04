#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for (int i = 0; i < m + 1; i++)
        cin >> a[i];

    vector<vector<int>> allMask;
    for (int i = 0; i < m + 1; i++)
    {
        vector<int> v;
        for (int j = 0; j < n; j++)
        {
            v.push_back((a[i] >> j) & 1);
        }
        allMask.push_back(v);
    }
    int ans = 0;
    vector<int> fedor = allMask[m];
    for (int i = 0; i < m; i++)
    {
        vector<int> v = allMask[i];
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (fedor[j] != v[j])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << endl;
    return 0;
}
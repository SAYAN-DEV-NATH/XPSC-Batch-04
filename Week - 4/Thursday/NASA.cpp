#include <bits/stdc++.h>
using namespace std;
vector<int> p;
void gp()
{
    int mx = 1 << 15;
    for (int i = 0; i < mx; i++)
    {
        string str = to_string(i);
        string rev = str;
        reverse(str.begin(), str.end());
        if (str == rev)
            p.push_back(i);
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> freq;
    long long ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        freq[v[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p.size(); j++)
        {
            if ((v[i] ^ p[j]) <= v[i])
                continue;
            if (freq.find(v[i] ^ p[j]) != freq.end())
                ans = ans + freq[v[i] ^ p[j]];
        }
    }
    for (auto it : freq)
        ans += ((long long)it.second * (it.second + 1)) / 2;
    cout << ans << endl;
}
int main()
{
    gp();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
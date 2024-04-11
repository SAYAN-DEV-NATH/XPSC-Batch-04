#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> cnt;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[__lg(x)]++;
        }
        long long result = 0;
        for (auto &[x, y] : cnt)
        {
            result += (1LL * y * (y - 1)) / 2;
        }
        cout << result << endl;
    }
    return 0;
}
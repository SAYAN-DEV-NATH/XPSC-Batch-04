#include <bits/stdc++.h> // 24-04-2024  20:23:09
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
        string a, b;
        cin >> a >> b;
        int n = a.size(), m = b.size();
        int ans = 0;
        for (int len = 1; len <= min(n, m); len++)
        {
            for (int i = 0; i + len <= n; i++)
            {
                for (int j = 0; j + len <= m; j++)
                {
                    if (a.substr(i, len) == b.substr(j, len))
                    {
                        ans = max(ans, len);
                    }
                }
            }
        }
        cout << a.size() + b.size() - 2 * ans << "\n";
    }

    return 0;
}
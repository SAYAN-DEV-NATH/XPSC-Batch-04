#include <bits/stdc++.h> // 04-05-2024  22:32:21
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = 1e9;
        for (int i = 0; i < n; i++)
        {
            int cur = 0;
            if (i > 0)
            {
                cur = max(cur, abs(a[i] - a[i - 1]));
            }
            if (i + 1 < n)
            {
                cur = max(cur, abs(a[i] - a[i + 1]));
            }
            ans = min(ans, cur);
        }

        cout << ans << endl;
    }

    return 0;
}
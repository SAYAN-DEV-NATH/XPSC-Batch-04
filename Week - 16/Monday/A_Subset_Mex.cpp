// Creator: SAYAN-DEV-NATH
// Created: 2024-07-15 22:03:56
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
        int n;
        cin >> n;
        unordered_map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }

        int ans = 0, res1 = -1, res2 = 0, f = 0;
        for (int i = 0; i < 101; i++)
        {
            if (m[i] > 1)
            {
                if (!f)
                    res2 = i + 1;
                continue;
            }

            if (m[i] == 0)
            {
                res1 = i;
                break;
            }

            f = 1;
        }
        cout << res1 + res2 << endl;
    }

    return 0;
}
// Creator: SAYAN-DEV-NATH
// Created: 2024-05-20 06:50:33
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
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
        vector<int> a(1005, 0);
        for (int i = 1; i <= n; i++)
        {
            int tmp;
            cin >> tmp;
            a[tmp] = i;
        }
        int mx = -1;
        for (int i = 1; i <= 1000; i++)
        {
            for (int j = 1; j <= 1000; j++)
            {
                if (a[i] && a[j] && __gcd(i, j) == 1)
                {
                    mx = max(mx, (a[i] + a[j]));
                }
            }
        }
        cout << mx << '\n';
    }

    return 0;
}
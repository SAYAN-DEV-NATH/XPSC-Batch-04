/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-29 21:24:48
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= i + 1)
                cnt++;
        }
        (cnt == n) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
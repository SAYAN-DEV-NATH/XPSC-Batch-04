// Creator: SAYAN-DEV-NATH
// Created: 2024-08-12 23:11:59
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
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
        vector<int> a(n);
        for (int &i : a)
            cin >> i;
        int ans = 2;
        if (is_sorted(a.begin(), a.end()))
            ans = 0;
        else if (a[0] == 1 || a[n - 1] == n)
            ans = 1;
        else if (a[0] == n && a[n - 1] == 1)
            ans = 3;
        cout << ans << nl;
    }

    return 0;
}
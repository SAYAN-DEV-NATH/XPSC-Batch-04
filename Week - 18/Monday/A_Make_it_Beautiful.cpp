// Creator: SAYAN-DEV-NATH
// Created: 2024-08-26 22:38:16
#include <bits/stdc++.h>
using namespace std;
const char nl = '\n';
#define pb push_back
#define fi first
#define se second
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
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (a[0] == a[n - 1])
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << a[n - 1] << " ";
            for (int i = 0; i < n - 1; i++)
                cout << a[i] << " ";
            cout << nl;
        }
    }

    return 0;
}
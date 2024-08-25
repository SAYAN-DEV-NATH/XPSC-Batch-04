// Creator: SAYAN-DEV-NATH
// Created: 2024-08-25 22:42:14
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
        vector<int> odd, even;

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 != 0)
                odd.push_back(i);
            else
                even.push_back(i);
        }
        if (odd.size() >= 3)
        {
            yes;
            cout << odd[0] << " " << odd[1] << " " << odd[2] << nl;
        }
        else if (odd.size() >= 1 && even.size() >= 2)
        {
            yes;
            cout << odd[0] << " " << even[0] << " " << even[1] << nl;
        }
        else
            no;
    }

    return 0;
}
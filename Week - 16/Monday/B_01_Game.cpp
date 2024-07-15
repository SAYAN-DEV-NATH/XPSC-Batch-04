// Creator: SAYAN-DEV-NATH
// Created: 2024-07-15 22:10:46
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
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;

        for (char c : s)
        {
            if (c == '0')
                count0++;
            else if (c == '1')
                count1++;
        }

        if (min(count0, count1) % 2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    }

    return 0;
}
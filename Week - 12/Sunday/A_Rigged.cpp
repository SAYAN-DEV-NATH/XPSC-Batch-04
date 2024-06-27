/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-11 22:58:20
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> str, end;
        for (int i = 0; i < n; ++i)
        {
            int x, y;
            cin >> x >> y;
            str.push_back(x);
            end.push_back(y);
        }
        bool found = false;
        for (int i = 1; i < n; ++i)
        {
            if (str[i] >= str[0] && end[i] >= end[0])
            {
                cout << -1 << endl;
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << str[0] << endl;
        }
    }
    return 0;
}
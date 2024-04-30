#include <bits/stdc++.h> // 30-04-2024  13:24:00
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
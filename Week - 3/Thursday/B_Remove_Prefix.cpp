//  Creator: Sayan Dev Nath
//  Created: 04-04-2024  20:28:33
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        unordered_map<int, int> mp;
        for (int i = n - 1; i >= 0; --i)
        {
            if (mp.find(a[i]) != mp.end())
                break;
            else
                mp[a[i]]++;
        }
        cout << n - mp.size() << endl;
    }

    return 0;
}
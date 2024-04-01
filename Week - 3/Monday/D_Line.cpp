//  Creator: Sayan Dev Nath
//  Created: 01-04-2024  14:08:47
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0;
        string s;
        cin >> n >> s;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                a[i] = i;
            else
                a[i] = n - i - 1;
            sum += a[i];
        }
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            ll tmp = n - a[i] - 1, res = sum - a[i] + tmp;
            if (res > sum)
                sum = res;
            cout << sum << " ";
        }
        cout << '\n';
    }

    return 0;
}
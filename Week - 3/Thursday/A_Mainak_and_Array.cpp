//  Creator: Sayan Dev Nath
//  Created: 05-04-2024  14:20:25
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
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        ll ans = INT_MIN;
        ans = max(ans, a[n] - a[1]);

        for (int i = 2; i <= n; ++i)
            ans = max(ans, a[i] - a[1]);
        for (int i = n - 1; i >= 1; --i)
            ans = max(ans, a[n] - a[i]);
        for (int i = 2; i <= n; i++)
            ans = max(ans, a[i - 1] - a[i]);

        cout << ans << endl;
    }

    return 0;
}
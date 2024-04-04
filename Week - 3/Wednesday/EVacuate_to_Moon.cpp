#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, m, h;
        cin >> n >> m >> h;

        vector<ll> v1(n);
        vector<ll> v2(m);

        for (ll i = 0; i < n; i++)
            cin >> v1[i];
        for (ll i = 0; i < m; i++)
            cin >> v2[i];

        sort(v1.begin(), v1.end(), greater<ll>());
        sort(v2.begin(), v2.end(), greater<ll>());

        for (ll j = 0; j < m; j++)
            v2[j] *= h;

        long long ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i < m)
            {
                if (v1[i] >= v2[i])
                    ans += v2[i];
                else
                    ans += v1[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
//---> Creator: Sayan Dev Nath
//---> Created: 2024-03-23 20:22:23
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll l = 0, r = 0, ans = 0, sum = 0;
    multiset<ll> ml;

    while (r < n)
    {
        ml.insert(a[r]);
        ll mx, mn;
        mx = *ml.rbegin();
        mn = *ml.begin();

        if ((mx - mn) <= k)
            ans += (r - l + 1);
        else
        {
            while (l < r)
            {
                mn = *ml.begin();
                mx = *ml.rbegin();
                if ((mx - mn) <= k)
                    break;
                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            mn = *ml.begin();
            mx = *ml.rbegin();
            if ((mx - mn) <= k)
                ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k = 1;
    ll n, q;
    while (cin >> n >> q)
    {
        if (n == 0 && q == 0)
            break;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << "CASE# " << k << ":\n";
        while (q--)
        {
            ll x;
            cin >> x;
            ll l = 0, r = n - 1, index = -1;
            bool flag = false;
            while (l <= r)
            {
                ll m = (l + r) / 2;
                if (x == a[m])
                {
                    flag = true;
                    index = m;
                    r = m - 1;
                }
                else if (x > a[m])
                    l = m + 1;
                else
                    r = m - 1;
            }
            if (flag)
                cout << x << " found at " << index + 1 << endl;
            else
                cout << x << " not found\n";
        }
        k++;
    }

    return 0;
}
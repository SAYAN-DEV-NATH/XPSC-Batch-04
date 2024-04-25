#include <bits/stdc++.h> // 25-04-2024  12:11:26
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll s = 0, cnt = 0;
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                cnt++;
                a[i] = -a[i];
            }
            s += a[i];
        }
        sort(a.begin(), a.end());
        if (cnt % 2 == 1)
            s -= 2 * a[0];
        cout << s << "\n";
    }

    return 0;
}
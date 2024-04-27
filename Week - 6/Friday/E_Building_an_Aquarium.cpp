#include <bits/stdc++.h> // 27-04-2024  22:37:16
#define ll long long int
using namespace std;
const int MAX = 200007;
const int MOD = 1000000007;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n;
        ll x;
        cin >> n >> x;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll low = 0, hight = 2000000007;
        while (low < hight)
        {
            ll mid = low + (hight - low + 1) / 2;
            ll tot = 0;
            for (int i = 0; i < n; i++)
                tot += max(mid - a[i], 0LL);
            if (tot <= x)
                low = mid;
            else
                hight = mid - 1;
        }
        cout << low << endl;
    }

    return 0;
}
#include <bits/stdc++.h> // 02-05-2024  14:42:47
#define ll long long int
using namespace std;

ll k, n, ans;
vector<ll> a;

bool good(ll x)
{
    ll temp = x;
    x *= k;
    for (auto el : a)
        x -= min(temp, el);
    return x <= 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll l, r, mid, i;
    cin >> k >> n;
    a.resize(n);
    for (i = 0; i < n; i++)
        cin >> a[i];

    l = 0, r = 1e12;
    while (l + 1 < r)
    {
        mid = (l + r) / 2;
        if (good(mid))
            l = mid;
        else
            r = mid;
    }
    cout << l;

    return 0;
}
// Creator:  SAYAN-DEV-NATH
// Created: 2024-05-17 00:20:39
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

ll x;
ll lcm(ll a, ll b)
{
    return (a / __gcd(a, b) * b);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    cin >> x;
    ll ans;
    for (ll i = 1; i * i <= x; i++)
    {
        if (x % i == 0 && lcm(i, x / i) == x)
        {
            ans = i;
        }
    }
    cout << ans << " " << x / ans << endl;

    return 0;
}
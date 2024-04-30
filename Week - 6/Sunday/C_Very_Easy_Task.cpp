#include <bits/stdc++.h> // 30-04-2024  20:44:39
#define ll long long int
using namespace std;

bool ok(ll n, ll x, ll y, ll t)
{
    if (t < min(x, y))
        return false;
    t -= min(x, y);
    return ((t / x) + (t / y) + 1 >= n);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, x, y;
    cin >> n >> x >> y;
    ll maxTime = n * min(x, y);
    ll minTime = 0;
    while (maxTime > minTime + 1)
    {
        ll Time = (minTime + maxTime) >> 1;
        if (ok(n, x, y, Time))
        {
            maxTime = Time;
        }
        else
        {
            minTime = Time;
        }
    }
    cout << maxTime << "\n";

    return 0;
}
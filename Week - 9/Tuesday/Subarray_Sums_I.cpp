#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n, target;
    cin >> n >> target;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll l = 0, r = 0, cnt = 0, sum = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum > target && l <= r)
        {
            sum -= a[l];
            l++;
        }
        if (sum == target)
        {
            cnt++;
        }
        r++;
    }
    cout << cnt << '\n';
    return 0;
}
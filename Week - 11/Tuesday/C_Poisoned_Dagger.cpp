// Creator: SAYAN-DEV-NATH
// Created: 2024-06-04 23:35:24
#include <bits/stdc++.h> // Essential header files lines(3-4)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> // Policy Based Data Structure lines(5-9)
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;

bool check(const vector<ll> &a, const ll &h, const ll &k)
{
    ll sum = 0, cur = 0;
    for (ll p = 0; p < a.size(); p++)
    {
        ll tst = a[p] + k - cur;
        sum += (tst < k) ? tst : k;
        cur = a[p] + k;
    }
    return (sum >= h);
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for (ll p = 0; p < n; p++)
        {
            cin >> a[p];
        }

        ll left = 0, right = h, res = 0;
        while (left <= right)
        {
            ll mid = (left + right) / 2;
            if (check(a, h, mid))
            {
                res = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }

        cout << res << endl;
    }

    return 0;
}
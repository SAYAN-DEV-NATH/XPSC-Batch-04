// Creator: SAYAN-DEV-NATH
// Created: 2024-06-02 22:04:33
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

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    // ll n;
    // cin >> n;
    // vector<pair<ll, bool>> vp;
    // for (ll i = 0; i < n; i++)
    // {
    //     ll a, b;
    //     cin >> a >> b;
    //     vp.push_back({a, true});
    //     vp.push_back({b, false});
    // }
    // sort(vp.begin(), vp.end());
    // ll cnt = 0, ans = 0;
    // for (ll i = 0; i < vp.size(); i++)
    // {
    //     if (vp[i].second)
    //         cnt++;
    //     else
    //         cnt--;
    //     ans = max(cnt, ans);
    // }
    // cout << ans << endl;

    ll n;
    cin >> n;
    map<ll, ll> d;
    for (ll i = 0; i < n; i++)
    {
        ll l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    ll sum = 0, ans = INT_MIN;
    for (auto &[idx, value] : d)
    {
        sum += value;
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
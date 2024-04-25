#include <bits/stdc++.h> // 25-04-2024  12:43:14
#define ll long long int
using namespace std;

vector<ll> v[2000005];
ll cnt[2000005];

void dfs(ll node, ll p)
{
    if (v[node].size() == 1 && node != 1)
        cnt[node] = 1;
    for (ll child : v[node])
    {
        if (child != p)
        {
            dfs(child, node);
            cnt[node] += cnt[child];
        }
    }
}
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
        for (ll i = 1; i <= n; i++)
        {
            cnt[i] = 0;
            v[i].clear();
        }
        for (ll i = 1; i < n; i++)
        {
            ll x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        dfs(1, -1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll x, y;
            cin >> x >> y;
            cout << cnt[x] * cnt[y] << endl;
        }
    }

    return 0;
}
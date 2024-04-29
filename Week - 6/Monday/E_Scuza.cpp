#include <bits/stdc++.h> // 29-04-2024  11:51:41
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {

        ll n, q;
        cin >> n >> q;
        vector<ll> a(n + 1, 0), pre(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pre[i] = a[i] + pre[i - 1];
        }
        vector<ll> ans(q);
        vector<pair<ll, ll>> b(q);
        for (int i = 0; i < q; i++)
        {
            cin >> b[i].first;
            b[i].second = i;
        }
        sort(b.begin(), b.end());
        int cnt = 0;
        for (int i = 0; i < q; i++)
        {
            while (1)
            {
                if (cnt == n or a[cnt + 1] > b[i].first)
                    break;
                cnt++;
            }
            ans[b[i].second] = pre[cnt];
        }

        for (auto &i : ans)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h> // 25-04-2024  12:47:18
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
        ll n, k;
        cin >> n >> k;
        map<int, vector<ll>> m;
        for (ll i = 0, x; i < n; ++i)
        {
            cin >> x;
            m[x].push_back(i);
        }
        for (ll i = 0, a, b; i < k; ++i)
        {
            cin >> a >> b;
            if (m[a].size() && m[b].size())
            {
                ll src = m[a][0];
                ll des = m[b][m[b].size() - 1];
                if (des >= src)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
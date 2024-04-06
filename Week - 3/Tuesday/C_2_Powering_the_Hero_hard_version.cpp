#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    priority_queue<ll> pq;
    ll sum = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        if (x > 0)
            pq.push(x);
        else
        {
            if (!pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
        }
    }
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
// Creator: Sayan Dev Nath
// Created: 06-04-2024  08:11:41
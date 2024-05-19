// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 09:40:20
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n, m;
    cin >> n >> m;
    multiset<ll> s;
    while (n--)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    while (m--)
    {
        ll x;
        cin >> x;
        auto it = s.upper_bound(x);
        if (it != s.begin())
        {
            cout << *--it << '\n';
            s.erase(it);
        }
        else
            cout << "-1\n";
    }

    return 0;
}
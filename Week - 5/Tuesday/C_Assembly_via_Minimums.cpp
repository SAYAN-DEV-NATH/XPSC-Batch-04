#include <bits/stdc++.h> // 24-04-2024  19:36:40
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
        ll n;
        cin >> n;
        ll m = (n * n - n) / 2;
        vector<ll> b(m);
        for (ll i = 0; i < m; i++)
            cin >> b[i];
        sort(b.begin(), b.end());
        for (ll i = 0; i < m; i += --n)
            cout << b[i] << ' ';
        cout << "1000000000\n";
    }

    return 0;
}
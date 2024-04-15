#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

void solve()
{
    ll n, b;
    cin >> n >> b;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll ans = (1LL << 31) - 1;
    for (ll i = 0; i < n; ++i)
    {
        if ((a[i] & b) == b)
            ans &= a[i]; 
    }

    if (ans == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();

    return 0;
}
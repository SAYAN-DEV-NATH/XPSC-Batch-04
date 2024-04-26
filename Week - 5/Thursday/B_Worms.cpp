#include <bits/stdc++.h> // 26-04-2024  09:21:11
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i == 0)
            a[i] = x;
        else
            a[i] = a[i - 1] + x;
    }
    ll m;
    cin >> m;
    while (m--)
    {
        ll x;
        cin >> x;
        auto it = lower_bound(a.begin(), a.end(), x);
        cout << (it - a.begin()) + 1 << endl;
    }

    return 0;
}
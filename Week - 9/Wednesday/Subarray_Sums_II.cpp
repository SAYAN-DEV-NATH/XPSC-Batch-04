// Creator: SAYAN-DEV-NATH
// Created: 2024-05-21 10:33:43
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll sum = 0, cnt = 0;
    map<ll, ll> mp;
    mp[0]++;
    for (ll i = 0; i < n; i++)
    {
        sum += a[i];
        cnt += mp[sum - x];
        mp[sum]++;
    }
    cout << cnt << endl;
    return 0;
}
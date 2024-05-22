// Creator: SAYAN-DEV-NATH
// Created: 2024-05-22 16:57:53
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    unordered_map<ll, ll> freq;
    freq[0] = 1;

    ll pre = 0;
    ll cnt = 0;

    for (ll i = 0; i < n; i++)
    {
        pre = (pre + arr[i]) % n;
        if (pre < 0)
            pre += n;
        cnt += freq[pre];
        freq[pre]++;
    }

    cout << cnt << '\n';
    return 0;
}
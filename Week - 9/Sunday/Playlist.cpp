// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 07:41:06
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
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    set<ll> s;
    ll left = 0, result = 0;
    for (ll right = 0; right < n; right++)
    {
        while (s.find(a[right]) != s.end())
        {
            s.erase(a[left]);
            left++;
        }
        s.insert(a[right]);
        result = max(result, right - left + 1);
    }
    cout << result << '\n';

    return 0;
}
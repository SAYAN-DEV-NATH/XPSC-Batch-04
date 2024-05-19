// Creator: SAYAN-DEV-NATH
// Created: 2024-05-19 08:02:27
#include <bits/stdc++.h>
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll size, target;
    cin >> size >> target;
    vector<pair<ll, ll>> a(size);
    for (ll i = 0; i < size; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < size; i++)
    {
        ll j = i + 1, k = size - 1;
        while (j < k)
        {
            ll sum = a[i].first + a[j].first + a[k].first;
            if (sum == target)
            {
                cout << a[i].second << " " << a[j].second << " " << a[k].second << '\n';
                return 0;
            }
            else if (sum > target)
                k--;
            else
                j++;
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}
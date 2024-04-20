#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

int main()
{
    // File:    B_Petr_and_a_Combination_Lock
    // Author:  Sayan Dev Nath
    // Created: 20-04-2024  09:19:44
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;

    vector<ll> angles(n);
    for (ll i = 0; i < n; i++)
        cin >> angles[i];

    for (ll i = 0; i < (1 << n); i++)
    {
        ll sum = 0;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
                sum += angles[j];
            else
                sum -= angles[j];
        }
        if (sum % 360 == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
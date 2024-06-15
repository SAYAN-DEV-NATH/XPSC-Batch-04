/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-15 08:33:21
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n, mx, maximum, sum = 0;
        cin >> n >> mx >> maximum;
        if ((mx - maximum) > 1 || (n < mx))
        {
            cout << -1 << endl;
            continue;
        }
        if (maximum == mx)
            maximum--;
        for (ll i = 0; i < n; i++)
        {
            if (mx > i)
                sum += i;
            else
                sum += maximum;
        }
        cout << sum << endl;
    }
    return 0;
}
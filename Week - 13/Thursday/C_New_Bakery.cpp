/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-27 17:40:31
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        if (b <= a)
        {
            cout << n * a << endl;
        }
        else
        {
            ll k = min(b - a + 1, n);
            cout << (b - k + 1) * n + k * (k - 1) / 2 << endl;
        }
    }
    return 0;
}
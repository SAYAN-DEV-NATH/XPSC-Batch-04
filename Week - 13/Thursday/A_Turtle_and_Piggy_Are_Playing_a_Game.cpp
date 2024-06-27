/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-27 17:09:28
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        int l, r;
        cin >> l >> r;
        int ans = log2(r);
        cout << ans << endl;
    }
    return 0;
}
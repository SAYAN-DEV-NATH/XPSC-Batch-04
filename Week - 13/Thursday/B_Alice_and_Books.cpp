/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-27 17:28:52
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int mx = *max_element(a.begin(), a.end() - 1);
        cout << mx + a[n - 1] << "\n";
    }
    return 0;
}
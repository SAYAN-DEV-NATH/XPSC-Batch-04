/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-15 07:51:57
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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int l = 0, r = n - 1;
        while (a[l] == b[l])
            l++;
        while (a[r] == b[r])
            r--;
        while (l > 0 && b[l] >= b[l - 1])
            l--;
        while (r < n - 1 && b[r] <= b[r + 1])
            r++;
        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}
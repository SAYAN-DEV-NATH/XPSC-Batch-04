/*-----------------(ও নমঃ শিবায়)-----------------*/
#include <bits/stdc++.h> // Creator: SAYAN-DEV-NATH
using namespace std;     // Created: 2024-06-11 23:02:01
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    vector<int> ans(n);
    int left = 0, right = n - 1;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            ans[left++] = v[i];
        }
        else
        {
            ans[right--] = v[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
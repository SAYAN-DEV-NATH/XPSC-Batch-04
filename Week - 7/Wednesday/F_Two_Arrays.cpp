#include <bits/stdc++.h> // 10-05-2024  16:12:51
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

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

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i] && a[i] != b[i] - 1)
            {
                flag = false;
                break;
            }
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
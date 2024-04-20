#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (k--)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (x == a[m])
            {
                flag = true;
                break;
            }
            else if (x > a[m])
                l = m + 1;
            else
                r = m - 1;
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}

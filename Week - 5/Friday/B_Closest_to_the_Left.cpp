#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    while (q--)
    {
        int k;
        cin >> k;
        int l = 0, r = n - 1, result = -1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (k >= a[m])
            {
                result = m;
                l = m + 1;
            }
            else
                r = m - 1;
        }
        cout << result + 1 << endl;
    }
    return 0;
}
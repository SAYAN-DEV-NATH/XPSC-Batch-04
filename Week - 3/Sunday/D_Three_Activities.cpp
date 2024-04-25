#include <bits/stdc++.h> // 25-04-2024  12:54:55
#define ll long long int
using namespace std;

vector<int> fun(vector<int> &a)
{
    int mx1 = -1, mx2 = -1, mx3 = -1;
    for (int i = 0; i < a.size(); ++i)
    {
        if (mx1 == -1 || a[i] > a[mx1])
        {
            mx3 = mx2;
            mx2 = mx1;
            mx1 = i;
        }
        else if (mx2 == -1 || a[i] > a[mx2])
        {
            mx3 = mx2;
            mx2 = i;
        }
        else if (mx3 == -1 || a[i] > a[mx3])
        {
            mx3 = i;
        }
    }
    return {mx1, mx2, mx3};
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> c[i];
        }

        int ans = 0;
        auto x = fun(a);
        auto y = fun(b);
        auto z = fun(c);

        for (int x : x)
        {
            for (int y : y)
            {
                for (int z : z)
                {
                    if (x != y && x != z && y != z)
                    {
                        ans = max(ans, a[x] + b[y] + c[z]);
                    }
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
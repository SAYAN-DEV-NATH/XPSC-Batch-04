#include <bits/stdc++.h> // 01-05-2024  11:16:34
#define ll long long int
using namespace std;

bool ok(int t, int n, int x, int y)
{
    if (t < min(x, y))
        return false;

    int cnt = 1;
    t -= min(x, y);
    cnt += (t / x) + (t / y);

    return cnt >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;

    int l = 0, r = max(x, y) * n, m;

    while (l + 1 < r)
    {
        m = l + (r - l) / 2;
        if (ok(m, n, x, y))
            r = m;
        else
            l = m;
    }
    cout << r;

    return 0;
}
#include <bits/stdc++.h> // 01-05-2024  05:46:01
#define ll long long int
using namespace std;

int upper_bound(vector<int> &a, int x)
{
    int l = 0, r = a.size() - 1;
    int m;
    while (r - l > 1)
    {
        m = (r + l) / 2;
        if (a[m] <= x)
            l = m + 1;
        else
            r = m;
    }
    if (a[l] > x)
        return l;
    if (a[r] > x)
        return r;
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        int x;
        cin >> x;
        (upper_bound(a, x) == -1) ? cout << n << endl : cout << upper_bound(a, x) << endl;
    }

    return 0;
}

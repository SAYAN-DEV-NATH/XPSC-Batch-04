#include <bits/stdc++.h> // 01-05-2024  06:35:53
#define ll long long int
using namespace std;

int lowerBound(vector<int> &a, int x)
{
    int l = 0, r = a.size() - 1;
    int m;
    while (r - l > 1)
    {
        m = (r + l) / 2;
        if (a[m] < x)
            l = m + 1;
        else
            r = m;
    }
    if (a[l] >= x)
        return l;
    if (a[r] >= x)
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
        (lowerBound(a, x) == -1) ? cout << n + 1 << endl : cout << lowerBound(a, x) + 1 << endl;
    }
    return 0;
}

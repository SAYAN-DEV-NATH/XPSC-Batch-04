#include <bits/stdc++.h> // 02-05-2024  14:56:21
#define ll long long int
using namespace std;
ll k, n;
vector<ll> a;

bool good(ll sum)
{
    int seg = 1;
    ll temp = 0;
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > sum)
        {
            flag = 0;
            break;
        }
        if (temp + a[i] <= sum)
            temp += a[i];
        else
        {
            temp = a[i];
            seg++;
        }
    }
    if (flag == 1)
        return seg <= k;
    else
        return 0;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    a.resize(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    ll l = 0, r = sum + 100;
    while (l + 1 < r)
    {
        ll mid = (l + r) / 2;
        if (good(mid))
            r = mid;
        else
            l = mid;
    }
    cout << r << "\n";

    return 0;
}
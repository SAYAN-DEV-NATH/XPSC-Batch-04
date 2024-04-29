#include <bits/stdc++.h> // 29-04-2024  13:20:45
#define ll long long int
using namespace std;
const int MAXN = 1e4 + 9;

bool isCube(ll num)
{
    ll left = 1, right = 10007;
    while (left <= right)
    {
        ll mid = (left + right) / 2;
        ll cube = mid * mid * mid;
        if (cube == num)
            return true;
        else if (cube < num)
            left = mid + 1;
        else if (cube > num)
            right = mid - 1;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        ll x;
        cin >> x;
        bool ans = false;
        for (ll p = 1; p * p * p <= x; p++)
        {
            ll y = x - p * p * p;
            if (isCube(y))
            {
                ans = true;
                break;
            }
        }
        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}
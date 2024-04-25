#include <bits/stdc++.h> // 25-04-2024  12:21:17
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> arr;
        ll x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            arr.push_back(x + i + 1);
        }
        sort(arr.begin(), arr.end());
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (c >= arr[i])
            {
                c -= arr[i];
                ans++;
            }
            else
                break;
        }
        cout << ans << endl;
    }

    return 0;
}
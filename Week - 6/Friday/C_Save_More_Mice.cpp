#include <bits/stdc++.h> // 27-04-2024  22:44:34
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
        ll n, k;
        cin >> n >> k;

        vector<ll> x(k);
        for (int i = 0; i < k; i++)
            cin >> x[i];
        sort(x.rbegin(), x.rend());
        ll cnt = 0, sum = 0;

        while (cnt < x.size() && sum + n - x[cnt] < n)
        {
            sum += n - x[cnt++];
        }

        cout << cnt << "\n";
    }

    return 0;
}
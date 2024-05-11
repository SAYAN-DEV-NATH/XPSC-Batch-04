#include <bits/stdc++.h> // 11-05-2024  09:45:07
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i != (n / i))
            {
                a.push_back(i);
                a.push_back(n / i);
            }
            else
                a.push_back(i);
        }
    }
    sort(a.begin(), a.end());
    if (k > a.size())
        cout << "-1" << endl;
    else
    {
        for (int i = 0; i < k; i++)
        {
            if (i == k - 1)
                cout << a[i] << endl;
        }
    }

    return 0;
}
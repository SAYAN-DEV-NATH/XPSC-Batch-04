#include <bits/stdc++.h> // 09-05-2024  22:24:12
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
        ll n;
        cin >> n;
        vector<ll> a(n), b(n);
        ll mx = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            mx = max(mx, a[i] - b[i]);
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] - mx < b[i] && b[i] != 0)
                flag = false;
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
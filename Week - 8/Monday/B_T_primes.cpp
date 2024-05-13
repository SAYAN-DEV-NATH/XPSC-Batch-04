#include <bits/stdc++.h> // 13-05-2024  20:30:30
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long int ll;

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

        ll ans = sqrt(n);
        ll cnt = 0;
        for (int i = 1; i < ans; i++)
        {
            if ((ans * ans == n) && (ans % i == 0))
                cnt++;
        }
        (cnt == 1) ? yes : no;
    }

    return 0;
}
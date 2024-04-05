//  Creator: Sayan Dev Nath
//  Created: 05-04-2024  20:39:03
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll sum = 0;
        while (n != 0)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << endl;
    }

    return 0;
}

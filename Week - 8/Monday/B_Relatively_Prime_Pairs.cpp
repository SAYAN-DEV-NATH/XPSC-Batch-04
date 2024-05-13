#include <bits/stdc++.h> // 13-05-2024  19:35:41
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll l, r;
    cin >> l >> r;
    cout << "YES\n";
    while (l < r)
    {
        cout << l << " " << l + 1 << endl;
        l += 2;
    }

    return 0;
}
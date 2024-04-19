#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    int k = 1;
    while (2 * k <= n - 1)
        k *= 2;
    for (int i = k - 1; i >= 0; --i)
        cout << i << " ";
    for (int i = k; i < n; ++i)
        cout << i << " ";
    cout << endl;
}
int main()
{
    // File:    B_Roof_Construction
    // Author:  Sayan Dev Nath
    // Created: 19-04-2024  21:20:46
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();
    return 0;
}
#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

void solve()
{
    int a, b;
    cin >> a >> b;
    cout << (a ^ (a & b)) + (b ^ (a & b)) << endl;
}
int main()
{
    // File:    A_XORwice
    // Author:  Sayan Dev Nath
    // Created: 19-04-2024  09:42:56
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();
    return 0;
}
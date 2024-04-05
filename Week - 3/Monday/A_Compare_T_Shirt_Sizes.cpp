#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;

void solve()
{
    string a, b;
    cin >> a >> b;
    int x = a.length(), y = b.length();
    char m = a[x - 1], n = b[y - 1];

    if (m == 'S' && n == 'S')
        (x < y) ? cout << ">\n" : (x == y) ? cout << "=\n" : cout << "<\n";
    else if (m == 'L' && n == 'L')
        (x > y) ? cout << ">\n" : (x == y) ? cout << "=\n" : cout << "<\n";
    else if (m == 'M' && n == 'M')
        cout << "=\n";
    else if (m == 'S' && n == 'M')
        cout << "<\n";
    else if (m == 'M' && n == 'S')
        cout << ">\n";
    else if (m == 'L' && n == 'M')
        cout << ">\n";
    else if (m == 'M' && n == 'L')
        cout << "<\n";
    else if (m == 'S' && n == 'L')
        cout << "<\n";
    else if (m == 'L' && n == 'S')
        cout << ">\n"; 
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while (tt--)
        solve();
    return 0;
}
// Creator: Sayan Dev Nath
// Created: 06-04-2024  00:12:39
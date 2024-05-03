#include <bits/stdc++.h>
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
        string s;
        cin >> s;

        ll zeros = count(s.begin(), s.end(), '0');
        ll ones = count(s.begin(), s.end(), '1');

        ll moves = min(zeros, ones);

        (moves % 2 == 1) ? cout << "Zlatan\n" : cout << "Ramos\n";
    }

    return 0;
}
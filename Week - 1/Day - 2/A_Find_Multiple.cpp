#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b, c; 
    cin >> a >> b >> c;

    ll ans = c*2;
    if((ans >= a && ans <= b))
        cout << ans << endl;
    else if((c>=a && c<=b))
        cout << c << endl;
    else
        cout << "-1" << endl;

    return 0;
}
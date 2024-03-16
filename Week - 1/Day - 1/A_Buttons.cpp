#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b; cin >> a >> b;

    ll ans = 0;
    if(a > b)
        ans = a + (a-1);
    else if(a < b)
        ans = b + (b-1);
    else
        ans = a + b;
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll a, b; 
    cin >> a >> b;

    ll cnt = 0;
    for(int i=a; i<=b; i++)
    {
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
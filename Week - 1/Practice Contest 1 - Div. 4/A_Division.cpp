#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(n >= 1900)
            cout << "Division 1" << endl;
        else if(1600 <= n && n <= 1899)
            cout << "Division 2" << endl;
        else if(1400 <= n && n <= 1599)
            cout << "Division 3" << endl;
        else
            cout << "Division 4" << endl;
    }

    return 0;
}
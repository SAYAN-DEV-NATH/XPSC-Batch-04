#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll test; cin >> test;
    while(test--)
    {
        ll n; cin >> n;
        vector<ll> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end());
        ll sum = 0;
        ll tmp = a[0];
        for(int i:a)
            sum += (i-tmp);
            
        cout << sum << endl;
    }   

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n, m; cin >> n >> m;
    vector<ll> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    ll i=0, j=0;
    while(j!=m)
    {
        if(a[i] < b[j])
        {
            ++i;
        }
        else
        {
            if(i > n)
                cout << i-1 << " ";
            else
                cout << i << " ";
            ++j;
        }
    }
    return 0;
}
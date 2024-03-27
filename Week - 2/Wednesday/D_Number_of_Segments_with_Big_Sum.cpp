//  Creator: Sayan Dev Nath
//  Created: 2024-03-27   11:07:04
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s; cin >> n >> s;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll l=0, r=0, sum=a[0], ans=0;
    while(r<n)
    {
        if(sum >= s)
        {
            ans += n-r;
            sum -= a[l];
            l++;
        }
        else
        {
            r++;
            sum += a[r];
        }
    }
    cout << ans << '\n';
    return 0;
}
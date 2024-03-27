//  Creator: Sayan Dev Nath
//  Created: 2024-03-27   10:29:11
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s; cin >> n >> s;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll l=0, r=0, sum=a[0], ans=INT_MAX;
    while(r<n)
    {
        if(sum >= s)
        {
            ans = min(ans, (r-l+1));
            sum -= a[l];
            l++;
        }
        else
        {
            r++;
            sum += a[r];
        }
    }
    (ans==INT_MAX)? cout<<"-1\n":cout<<ans<<'\n';
    return 0;
}
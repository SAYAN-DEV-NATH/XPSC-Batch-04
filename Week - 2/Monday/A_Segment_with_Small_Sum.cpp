//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   06:55:47
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, s; cin >> n >> s;
    vector<ll> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll l=0, r=0, sum=0, ans=0;
    while(r<n)
    {
        sum += a[r];
        if(sum <= s) ans = max(ans,r-l+1);
        else
        {
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}
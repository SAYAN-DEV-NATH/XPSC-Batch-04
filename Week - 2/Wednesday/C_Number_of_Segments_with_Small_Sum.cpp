//  Creator: Sayan Dev Nath
//  Created: 2024-03-27   10:49:47
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
        if(sum <= s) ans += (r-l+1);
        else
        {
            while(sum>s && l<r)
            {
                sum -= a[l];
                l++;
            }
            if(sum <= s) ans += r-l+1;
        }
        r++;
    }
    cout << ans << '\n';

    return 0;
}
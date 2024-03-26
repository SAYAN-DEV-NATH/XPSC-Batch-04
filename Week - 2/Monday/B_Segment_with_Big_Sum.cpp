//  Creator: Sayan Dev Nath
//  Created: 2024-03-25   23:55:14
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, s; cin >> n >> s;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    ll l=0, r=0, sum=0, ans=0;
    while(r<n)
    {
        sum += a[r];
        if(sum >= s)
        {
            if(ans==0) ans = r-l+1;
            else ans = min(ans, r-l+1);
            while(sum >= s)
            {
                sum -= a[l];
                ans = min(ans, r-l+1);
                l++;
            }
        }
        r++;
    }
    (ans==0)? cout<<"-1\n":cout<<ans<<'\n';

    return 0;
}
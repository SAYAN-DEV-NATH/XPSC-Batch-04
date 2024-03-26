//  Creator: Sayan Dev Nath
//  Created: 2024-03-26   18:09:41
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int a[N];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a,a+n);
        int cnt=1;
        int mx=0;
        for(int i=1; i<n; i++)
        {
            if(a[i]!=a[i-1])
            {
                mx=max(mx,cnt);
                cnt=1;
            }
            else cnt++;
        }
        mx=max(mx,cnt);
        int ans=n-mx;
        int sum=ans;
        cnt=0;
        while(sum>0)
        {
            cnt++;
            sum-=mx;
            mx=mx*2LL;
        }
        cout << ans+cnt<<endl;
    }

    return 0;
}
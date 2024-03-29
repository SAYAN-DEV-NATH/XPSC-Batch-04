//  Creator: Sayan Dev Nath
//  Created: 2024-03-29   21:48:12
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--)
    {
        int n, q; cin >> n >> q;
        vector<int> a(n+1), pre(n+1);
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
            pre[i] = pre[i-1] + a[i];
        }
        while(q--)
        {
            int l, r, k; cin >> l >> r >> k;
            int sum1 = (r-l+1)*k;
            int sum2 = pre[l-1]+(pre[n]-pre[r]);
            ((sum1+sum2)%2==0)? cout<<"NO\n":cout<<"YES\n";
        }

    }

    return 0;
}
//  Creator: Sayan Dev Nath
//  Created: 2024-03-29   22:57:02
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++) cin >> a[i][j];
        }
        int mx = INT_MIN;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int now = 0;
                int ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    now += a[ci][cj];
                    ci--; cj--;
                }
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    now += a[ci][cj];
                    ci++; cj++;
                }
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    now += a[ci][cj];
                    ci--; cj++;
                }
                ci=i, cj=j;
                while(ci>=0 && ci<n && cj>=0 && cj<m){
                    now += a[ci][cj];
                    ci++; cj--;
                }
                now -= a[i][j]*3;
                mx = max(mx, now);
            }
        }
        cout << mx << '\n';
    }

    return 0;
}
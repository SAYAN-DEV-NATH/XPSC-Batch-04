#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt; cin >> tt;

    while(tt--)
    {
        int n, m; cin >> n >> m;
        vector<string> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int mn = INT_MAX;
        for(int i=0; i<n; i++)
        {
           for(int j=i+1; j<n; j++)
           {
                string x = a[i];
                string y = a[j];

                int tmp = 0;
                for(int k=0; k<m; k++)
                {
                    tmp += abs((x[k]-'a')-(y[k]-'a'));
                }
                mn = min(mn,tmp);
           }
        }
        cout << mn << endl;
    }
    return 0;
}
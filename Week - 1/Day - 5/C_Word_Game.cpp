#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string arr[3][n];
        map<string, int> mp;

        for(int i=0; i<3; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> arr[i][j];
                mp[arr[i][j]]++;
            }
        }

        for(int i=0; i<3; i++)
        {
            int ans = 0;
            for(int j=0; j<n; j++)
            {
                if(mp[arr[i][j]] == 1) ans += 3;
                else if(mp[arr[i][j]] == 2) ans++;
            }
            cout << ans << " ";
        }cout << endl;
    }

    return 0;
}
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
        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            int x; cin >> x;
            ans = max(ans, x-i);
        }

        cout << ans << endl;
    }

    return 0;
}
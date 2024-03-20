#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vector<bool> a(n+1, false);
    for(int i=1; i<=n; i++)
    {
        int x; cin >> x;
        a[x] = true;
    }

    for(int i=1; i<=n; i++)
    {
        if(!a[i])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
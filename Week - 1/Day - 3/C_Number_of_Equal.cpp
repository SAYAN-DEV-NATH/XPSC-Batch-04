#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);

    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    ll i=0, j=0, ans=0;
    while(i!=n && j!=m)
    {
        ll cnt1=0, cnt2=0, curr=a[i];
        while(a[i]==curr && i<n)
        {
            cnt1++;
            i++;
        }
        while(curr > b[j] && j<m) j++;
        while(b[j]==curr && j<m)
        {
            cnt2++;
            j++;
        }
        ans += cnt1*cnt2;
    }
    cout << ans << endl;

    return 0;
}
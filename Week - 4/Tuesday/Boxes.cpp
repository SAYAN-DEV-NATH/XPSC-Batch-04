#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

void solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end(), greater<ll>());

    ll ans = 0, cnt = 1;
    bool flag = true;
    for(ll i=0; i<n; ++i){
        if(flag){
            ans ^= a[i];
            flag = false;
        }
        else{
            if(ans >= a[i]){
                ans ^= a[i];
            }
            else{
                cnt++;
                ans = 0;
                ans ^= a[i];
            }
        }
    }
    cout << cnt << endl;
}
int main() {
//     Boxes
//    _Sayan_Dev_Nath_
//     15-04-2024  22:29:13 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase; cin >> testCase;
    while (testCase--) solve();
    return 0;
}
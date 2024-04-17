#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int x = 0;
    for(int i=0; i<n; ++i) {
        cin >> a[i];
        x ^= a[i];
    }
    for(int i=0; i<n; ++i) {
        a[i] ^= x;
    }
    int y = 0;
    for(int i=0; i<n; ++i) {
        y ^= a[i];
    }
    (y==0)? cout<<x<<"\n":cout<<"-1\n";
}
int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) solve();
    return 0;
}
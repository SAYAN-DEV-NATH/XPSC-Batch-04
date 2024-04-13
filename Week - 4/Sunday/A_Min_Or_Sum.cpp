#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int result = 0;
    for(int i=0; i<n; ++i) {
        int x; cin >> x;
        result |= x;
    }
    cout << result << '\n';
}
int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int last = 0;
    for(int i=0; i<30; ++i) {
        if((n>>i)&1 == 1) {
            last = i;
        }   
    }
    cout << ((1<<last)-1) << endl;
}
int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) solve();
    return 0;
}
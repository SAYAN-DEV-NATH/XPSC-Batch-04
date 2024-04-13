#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
        cin >> x;
        int a = 0, b = 0;
        for (int i = 0; i < 30; ++i) {
            if (x & (1 << i)) {
                a += b;
                b = (1 << i);
            }
        }
        int ans = 1;
        for (int i = 0; i < 30; ++i) {
            if ((1 << i) <= a && (x & (1 << i)) == 0) {
                ans *= 2;
            }
        }
    cout << ans << endl;
}
int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) solve();
    return 0;
}
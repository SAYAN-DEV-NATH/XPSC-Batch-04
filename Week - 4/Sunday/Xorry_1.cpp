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
    cout << a << " " << b << endl;
}
int main() {
    int testCase;
    cin >> testCase;
    while (testCase--) solve();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        char ch;
        cin >> n >> ch;
        cin >> s;

        set<int> green_signals_pos;
        for (int i = 0;i < n;i++) {
            if (s[i] == 'g') {
                green_signals_pos.insert(i + 1);
            }
        }

        int ans = INT_MIN;
        for (int i = 0;i < n;i++) {
            if (s[i] == ch) {
                auto UB = green_signals_pos.lower_bound(i + 1);
                if (UB != green_signals_pos.end()) {
                    int diff = (*UB - (i + 1));
                    ans = max(ans, diff);
                }
                else {
                    int x = n - (i + 1), y = *green_signals_pos.begin();
                    ans = max(ans, x + y);
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
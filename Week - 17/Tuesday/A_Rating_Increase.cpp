#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string ab;
        cin >> ab;
        bool found = false;
        for (size_t i = 1; i < ab.length(); ++i) {
            if (ab[i] != '0' && stoi(ab.substr(0, i)) < stoi(ab.substr(i))) {
                cout << ab.substr(0, i) << " " << ab.substr(i) << endl;
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << endl;
        }
    }
    return 0;
}

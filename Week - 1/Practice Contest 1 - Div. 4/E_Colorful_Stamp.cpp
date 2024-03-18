#include <iostream>
#include <string>

using namespace std;

bool canMakePicture(const string& s) {
    int n = s.size();

    // Check if the first and last characters are different
    if (s[0] == s[n - 1]) return false;

    // Check if there are any consecutive characters of the same color
    for (int i = 1; i < n; ++i) {
        if (s[i] == s[i - 1]) return true;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (canMakePicture(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

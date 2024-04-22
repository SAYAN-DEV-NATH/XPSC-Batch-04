#include <bits/stdc++.h> // 21-04-2024  21:57:55
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        s = s.substr(0, s.size()/2);
        int k = unique(s.begin(), s.end()) - s.begin();
        (k==1)? cout<<"NO\n":cout<<"YES\n";
    }

    return 0;
}
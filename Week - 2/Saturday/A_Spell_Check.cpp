#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string t = "Timru";

    int tt; cin >> tt;
    while(tt--)
    {
        int n;
        string s;
        cin >> n >> s;

        if(n != 5) cout << "NO\n";
        else
        {
            sort(s.begin(), s.end());
            if(s==t) cout << "YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
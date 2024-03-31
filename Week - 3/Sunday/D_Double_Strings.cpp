//  Creator: Sayan Dev Nath
//  Created: 2024-03-30   18:40:38
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--) {
        int n; cin >> n;
        string s[n];
        unordered_map<string, bool> mp;
        for(int i=0; i<n; i++) {
            cin >> s[i]; mp[s[i]] = true;
        }

        for(int i=0; i<n; i++) {
            bool ok = false;
            for(int j=1; j<s[i].length(); j++) {
                string pref = s[i].substr(0, j);
                string suff = s[i].substr(j, s[i].length()-j);
                if(mp[pref] && mp[suff]) {
                    ok = true;
                    break;
                }
            }
            cout<<ok;
        }
        cout<<'\n';
    }

    return 0;
}
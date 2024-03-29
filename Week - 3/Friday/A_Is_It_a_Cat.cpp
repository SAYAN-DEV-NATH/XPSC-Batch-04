//  Creator: Sayan Dev Nath
//  Created: 2024-03-29   21:22:13
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string ans="meow";
    int t; cin >> t;
    while(t--)
    {
        int n; string s, ans1; cin >> n >> s;
        list<char> l;
        for(char &c:s)
        {
            if(c >= 'A' && c <= 'Z') 
                c = c + 32;
            l.push_back(c);
        }
        l.unique();
        for(char &c:l) ans1.push_back(c);
        (ans==ans1)? cout << "YES\n": cout << "NO\n";
    }

    return 0;
}
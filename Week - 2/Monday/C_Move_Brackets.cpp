/*  Penman: Sayan Dev Nath
    Date: 2024-03-22 19:48:39
*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        string s; cin >> s;

        stack<char> s1;
        for(char c:s)
        {
            if(s1.empty()) s1.push(c);
            else if(s1.top() == '(' && c == ')') s1.pop();
            else s1.push(c);
        }

        cout << s1.size()/2 << "\n";
    }

    return 0;
}
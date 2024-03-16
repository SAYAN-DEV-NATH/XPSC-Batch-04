#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;
    vector<int>  cnt(26, 0);
    for(char c:s)
        cnt[c-'a']++;

    for(int i=0; i<26; i++)
    {
        if(cnt[i] == 0)
        {
            cout << char(i+'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
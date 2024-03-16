#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;

    ll sz = s.size();
    if(sz == 4)
        cout << s << endl;
    else if(sz == 1)
        cout << "000"+s << endl;
    else if(sz == 2)
        cout << "00"+s << endl;
    else
        cout << "0"+s << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t; cin >> t;
    while(t--)
    {
        string str; cin >> str;
        int sum1=0, sum2=0;
        for(int i=0; i<6; i++)
        {
            if(i>=0 && i<=2)
                sum1 += str[i]-'0';
            else
                sum2 += str[i]-'0';
        }
        if(sum1==sum2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
} 
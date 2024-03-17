#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a, t; cin >> a >> t;
    ll cnt = 0;
    for(int i=0; i<=a; i++)
    {
        for(int j=0; i+j<=a; j++)
        {
            for(int k=0; i+j+k<=a; k++)
            {
                if((i*j*k)<=t)
                    cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}
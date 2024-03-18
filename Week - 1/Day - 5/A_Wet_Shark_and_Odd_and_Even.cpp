#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    ll sum = 0;
    vector<int> a(n);
    int mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        cin >> a[i], sum+=a[i];
        if(a[i]%2!=0)
        {
            mn = min(mn,a[i]);
        }
    }

    int tmp = sum;
    if(sum%2==0)
    {
        cout << sum;
        return 0;
    }
    else
    {
        cout << sum-mn << endl;
    }

    return 0;
}
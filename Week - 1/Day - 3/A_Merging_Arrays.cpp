// #include <bits/stdc++.h>
// #define endl '\n'
// #define ll long long int
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    int i=0, j=0;
    while(i!=n && j!=m)
    {
        if(a[i] < b[j])
            cout << a[i++] << " ";
        else if(a[i] > b[j])
            cout << b[j++] << " ";
        else
            cout << a[i++] << " " << b[j++] << " ";
    }

    if(i!=n)
        for(int k=i; k<n; k++) cout << a[k] << " ";
    if(j!=m)
        for(int k=j; k<m; k++) cout << b[k] << " ";

    return 0;
}
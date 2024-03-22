#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;

    vector<int> ans;
    while(n--)
    {
        int a; cin >> a;
        if(a != x) ans.push_back(a);
    }
    for(int i:ans) cout << i << " ";
    return 0;
}
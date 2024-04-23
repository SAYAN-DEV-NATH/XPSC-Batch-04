#include <bits/stdc++.h> // 23-04-2024  11:09:53
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t; while(t--)
    {
        long long int a, b, n, s; cin >> a >> b >> n >> s;
        if(s%n<=b && a*n+b>=s){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}
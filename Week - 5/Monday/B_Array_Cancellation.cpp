#include <bits/stdc++.h> // 23-04-2024  19:20:40
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long tt; cin >> tt; while(tt--)
    {
        long long n; cin >> n; 
        vector<long long> a(n);
        long long sum = 0, mn = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
            if(mn > sum){
                mn = sum;
            }
        }
        cout << abs(mn) << endl;
    }

    return 0;
}
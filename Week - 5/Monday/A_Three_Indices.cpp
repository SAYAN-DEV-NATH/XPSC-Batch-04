#include <bits/stdc++.h> // 22-04-2024  15:34:53
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        int x, y, z;
        bool flag = false;
        for(int i=1; i<n-1; i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                flag = true;
                x = i, y = i+1, z = i+2;
                break;
            }
        }
        if(flag){
            cout << "YES\n";
            cout << x << " " << y << " " << z << endl;
        }else cout << "NO\n";
    }

    return 0;
}
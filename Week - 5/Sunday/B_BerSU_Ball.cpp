#include <bits/stdc++.h> // 21-04-2024  22:12:55
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    int m; cin >> m;
    vector<int> b(m);
    for(int i=0; i<m; i++) cin >> b[i];
    sort(b.begin(), b.end());

    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(abs(a[i]-b[j]) < 2){
                b[j] = 102;
                cnt++;
                break;
            }
        }
    }   
    cout << cnt << endl;
    return 0;
}
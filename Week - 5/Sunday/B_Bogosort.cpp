#include <bits/stdc++.h> // 22-04-2024  09:58:37
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt; while(tt--)
    {
        int n; cin >> n;
        vector<int> a(n), ans(n);
        for(int i=0; i<n; i++) cin >> a[i];

        sort(a.begin(), a.end(), greater<int>());
        for(int &i:a) cout << i << " ";
        cout << endl;
    }

    return 0;
}
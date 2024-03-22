#include <bits/stdc++.h>
#define endl '\n';
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt; cin >> tt;
    while(tt--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        for(int i=0; i<n; i++)
        {
            int n;
            string s;
            cin >> n >> s;
            for(char c:s)
            {
                if(c == 'D')
                {
                    if(a[i]==9) a[i]=0;
                    else a[i]++;
                }
                else
                {
                    if(a[i]==0) a[i]=9;
                    else a[i]--;
                }
            }
        }
        for(int i:a) cout << i << " ";
        cout << endl;
    }
    return 0;
}
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i) 
        {
            cin >> a[i];
            freq[a[i]]++;
        }

        int result = -1;
        for (auto it = freq.begin(); it != freq.end(); ++it) 
        {
            if (it->second >= 3) 
            {
                result = it->first;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}

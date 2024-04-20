#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    auto it = lower_bound(a.begin(), a.end(), k);
    cout << it - a.begin() << endl;
    return 0;
}
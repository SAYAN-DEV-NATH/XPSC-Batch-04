#include <bits/stdc++.h> // 01-05-2024  14:42:08
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n, k;
        cin >> n >> k;
        int need = (k - 1) / (n - 1);
        cout << k + need << endl;
    }

    return 0;
}
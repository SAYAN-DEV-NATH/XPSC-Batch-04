// Creator: SAYAN-DEV-NATH
// Created: 2024-05-31 21:15:10
#include <bits/stdc++.h> // Essential header files lines(3-4)
using namespace std;
#include <ext/pb_ds/assoc_container.hpp> // Policy Based Data Structure lines(5-9)
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];
        int l = 0, r = 0, i = 0, j = n - 1;
        int k_left = k, k_right = k;

        if (c[0] == c[n - 1])
        {
            k_left = k / 2;
            k_right = k - k_left;
        }
        for (; i < n && l < k_left; i++)
        {
            if (c[i] == c[0])
                l++;
        }
        for (; j >= 0 && r < k_right; j--)
        {
            if (c[j] == c[n - 1])
                r++;
        }
        ((i - 1) < (j + 1)) ? yes : no;
    }

    return 0;
}
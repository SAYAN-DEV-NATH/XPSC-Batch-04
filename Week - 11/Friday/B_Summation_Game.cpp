// Creator: SAYAN-DEV-NATH
// Created: 2024-06-07 15:06:59
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
        int n, k, x;
        cin >> n >> k >> x;

        int A[n + 1] = {};
        for (int i = 1; i <= n; i++)
            cin >> A[i];

        sort(A + 1, A + n + 1, greater<int>());

        for (int i = 1; i <= n; i++)
            A[i] += A[i - 1];

        int ans = -1e9;
        for (int i = 0; i <= k; i++)
            ans = max(ans, A[n] - 2 * A[min(i + x, n)] + A[i]);

        cout << ans << "\n";
    }

    return 0;
}
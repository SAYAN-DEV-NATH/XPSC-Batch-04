// Creator: SAYAN-DEV-NATH
// Created: 2024-07-02 14:07:05
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
        ll x, y, k;
        cin >> x >> y >> k;
        while (k > 0 && x != 1)
        {
            ll ost = (x / y + 1) * y - x;
            ost = max(1ll, ost);
            ost = min(ost, k);
            x += ost;
            while (x % y == 0)
            {
                x /= y;
            }
            k -= ost;
        }
        cout << x + k % (y - 1) << '\n';
    }

    return 0;
}
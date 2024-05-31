// Creator: SAYAN-DEV-NATH
// Created: 2024-05-31 00:39:55
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
        ll a, b, k;
        cin >> a >> b >> k;
        ll cnt = 0;
        while (b > a)
        {
            if (b % k == 0 && b / k >= a)
            {
                b /= k;
                cnt++;
            }
            else
            {
                if ((b / k) < a)
                {
                    cnt += (b - a);
                    b -= (b - a);
                }
                else
                {
                    cnt += (b % k);
                    b -= (b % k);
                }
                if (b <= a)
                    break;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
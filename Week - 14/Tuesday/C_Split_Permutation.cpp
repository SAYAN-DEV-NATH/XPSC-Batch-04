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
        int n;
        cin >> n;

        if (n % 2 == 0)
        {
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << endl;
        }
        else
        {
            int t = n;
            n--;
            for (int i = 1; i <= (n / 2); i++)
            {
                cout << i << " " << n - i + 1 << " ";
            }
            cout << t << endl;
        }
    }

    return 0;
}
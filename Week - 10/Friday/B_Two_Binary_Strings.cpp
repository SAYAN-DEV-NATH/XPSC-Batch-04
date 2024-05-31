// Creator: SAYAN-DEV-NATH
// Created: 2024-05-31 21:10:02
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
        string a, b;
        cin >> a >> b;
        bool flag = false;
        for (int i = 0; i < a.size(); i++)
        {
            if ((a[i] == '0' && b[i] == '0') && (a[i + 1] == '1' && b[i + 1] == '1'))
            {
                flag = true;
                break;
            }
        }
        (flag) ? yes : no;
    }

    return 0;
}
// Creator: SAYAN-DEV-NATH
// Created: 2024-06-04 22:07:06
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
        string s;
        cin >> s;
        ll cnt = 0;
        for (ll i = 0; i < 4; i++)
        {
            if (s[i] == '1')
                cnt++;
        }
        if (cnt == 1)
            cout << "11\n";
        else if (cnt == 3)
            cout << "231\n";
        else if (cnt == 4)
            cout << "441\n";
        else
            ((s[0] == '1' && s[1] == '1') || (s[2] == '1' && s[3] == '1')) ? cout << "21\n" : cout << "121\n";
    }

    return 0;
}
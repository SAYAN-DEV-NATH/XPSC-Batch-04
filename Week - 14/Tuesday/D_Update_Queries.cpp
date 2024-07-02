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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> ind(m);
        for (int i = 0; i < m; i++)
        {
            cin >> ind[i];
        }
        string c;
        cin >> c;

        set<int> st(ind.begin(), ind.end());
        sort(c.begin(), c.end());
        int j = 0;
        for (auto i : st)
        {
            s[i - 1] = c[j];
            j++;
        }
        cout << s << '\n';
    }

    return 0;
}
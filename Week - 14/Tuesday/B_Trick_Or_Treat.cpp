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

        vector<int> a(n), b(n);

        int A = 0, B = 0;

        for (int i = 0; i < n; ++i)
        {

            cin >> a[i];

            if (a[i] % m == 0)
            {

                A++;
            }
        }

        for (int i = 0; i < n; ++i)
        {

            cin >> b[i];

            if (b[i] % m == 0)
            {

                B++;
            }
        }

        unordered_map<int, int> r;

        for (int j = 0; j < n; ++j)
        {

            if (b[j] % m != 0)
            {

                int rem = b[j] % m;

                r[rem]++;
            }
        }

        long long ways = 0;

        for (int i = 0; i < n; ++i)
        {

            if (a[i] % m != 0)
            {

                int R = (m - (a[i] % m));

                ways += r[R];
            }
        }

        ways += (long long)A * B;

        cout << ways << endl;
    }

    return 0;
}
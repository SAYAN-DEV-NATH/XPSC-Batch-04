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
const int N = 1e5 + 10;
int a[N];

int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int pos = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i + 1])
            {
                pos = i;
                break;
            }
        }
        if (!pos)
            yes;
        else
        {
            int flag = 0;
            for (int i = pos + 1; i <= n; i++)
            {
                int j = (i % n) + 1;
                if (a[i] > a[j])
                    flag = 1;
            }
            (!flag) ? yes : no;
        }
    }

    return 0;
}
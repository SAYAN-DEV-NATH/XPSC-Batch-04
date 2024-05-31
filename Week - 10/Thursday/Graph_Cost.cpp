// Creator: SAYAN-DEV-NATH
// Created: 2024-05-31 14:31:57
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
        ll n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        if (n == 1)
        {
            cout << 0 << endl;
            break;
        }

        ll mn = a[n - 1], ind = n - 1;
        vector<pair<ll, ll>> v(n);

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] <= mn)
            {
                mn = a[i];
                ind = i;
            }
            v[i] = {mn, ind};
        }

        ll cost = 0, sum = 0;
        mn = a[0], ind = 0;

        for (ll i = 1; i < n; i++)
        {
            sum += max(a[i], a[i - 1]);

            if (a[i] < mn || a[i] == v[i].first)
            {
                cost += min(sum, (i - ind) * max(mn, a[i]));
                mn = a[i];
                ind = i;
                sum = 0;
            }
        }

        cout << min(cost, max(a[0], a[n - 1]) * (n - 1)) << endl;
    }

    return 0;
}
// #include <iostream>
// #include <vector>
// using namespace std;

// #define Code ios_base::sync_with_stdio(false);
// #define By cin.tie(NULL);
// #define Asquare cout.tie(NULL);

// using ll = long long;

// void asquare()
// {

// }

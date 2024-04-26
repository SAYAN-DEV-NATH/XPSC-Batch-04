#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q, x, i;

    while (cin >> n)
    {
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<ll>::iterator low, up;
        cin >> q;
        while (q--)
        {
            cin >> x;
            low = lower_bound(a.begin(), a.end(), x);
            up = upper_bound(a.begin(), a.end(), x);
            if (low == a.begin())
                cout << "X ";
            else
                cout << *--low << " ";
            if (up == a.end())
                cout << "X\n";
            else
                cout << *up << endl;
        }
    }

    return 0;
}

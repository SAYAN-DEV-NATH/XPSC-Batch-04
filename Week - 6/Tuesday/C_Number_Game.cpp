#include <bits/stdc++.h> // 01-05-2024  15:02:44
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TC;
    cin >> TC;
    while (TC--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        int ans = 0;
        for (int k = 1; k <= n; ++k)
        {
            multiset<int> s(a.begin(), a.end());
            for (int i = 0; i < k; ++i)
            {
                auto it = s.upper_bound(k - i);
                if (it == s.begin())
                    break;
                s.erase(--it);
                if (!s.empty())
                {
                    int x = *s.begin();
                    s.erase(s.begin());
                    s.insert(x + k - i);
                }
            }
            if (s.size() + k == n)
                ans = k;
        }
        cout << ans << '\n';
    }

    return 0;
}
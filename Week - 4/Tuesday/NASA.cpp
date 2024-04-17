#include <bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
typedef long long ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), tmp;
    for (ll i = 0; i < n; ++i)
        cin >> a[i];

    ll cnt = 0, ans;
    for (ll i = 0; i < n; ++i)
    {
        for (ll j = 0; j < n; ++j)
        {
            ans = a[i] ^ a[j];
            tmp.push_back(ans);

            string s;
            while (ans != 0)
            {
                ll r = ans % 10;
                s.push_back(r);
                ans /= 10;
            }
            if (s.length() == 0)
                cnt++;
            else
            {
                ll l = 0, r = s.length() - 1;
                bool flag = true;
                while (l < r)
                {
                    if (s[l] != s[r])
                    {
                        flag = false;
                        break;
                    }
                    l++;
                    r--;
                }
                if (flag)
                    cnt++;
            }
        }
    }
    for (auto &i : tmp)
        cout << i << " ";
    // cout << cnt << endl;
}
int main()
{
    //     NASA
    //    _Sayan_Dev_Nath_
    //     15-04-2024  23:04:56
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCase;
    cin >> testCase;
    while (testCase--)
        solve();
    return 0;
}
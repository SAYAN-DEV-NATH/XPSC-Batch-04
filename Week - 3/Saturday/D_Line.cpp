#include <bits/stdc++.h>
#include <iterator>
using namespace std;
#define IO ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define endll "\n"
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
#define fr1(i, n) for (ll i = 1; i <= n; i++)
#define asort(a) sort(a + 1, a + n + 1)
#define dsort(a) sort(a + 1, a + n + 1, greater<int>())
#define LightOn(n, k) ((n) | (1 << k))
#define Lightoff(n, k) ((n) & (~(1 << k)))
#define IsOn(n, k) ((n >> k) & 1)
const long long N = 2e5 + 5, MOD = 1e9 + 7, oo = 1e18;
const double PI = 3.14;
const double Prox = 1e-7;
map<ll, ll> mp;
ll a[N], b[N];
set<ll> s;

int main()
{
    IO
        ll Tc;
    cin >> Tc;
    while (Tc--)
    {
        ll n, sum = 0;
        string s;
        cin >> n >> s;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                a[i] = i;
            else
                a[i] = n - i - 1;
            sum += a[i];
        }
        sort(a.begin(), a.end());
        for (ll i = 0; i < n; i++)
        {
            ll tmp = n - a[i] - 1, res = sum - a[i] + tmp;
            if (res > sum)
            {
                sum = res;
            }
            cout << sum << " ";
        }
        cout << endll;
    }
    return 0;
}
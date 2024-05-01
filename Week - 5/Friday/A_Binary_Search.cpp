#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n, k;
	cin >> n >> k;
	vector<ll> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	while (k--)
	{
		ll x;
		cin >> x;
		ll l = 0, r = n - 1;
		bool flag = false;
		while (l <= r)
		{
			ll m = (l + r) / 2;
			if (a[m] == x)
			{
				flag = true;
				break;
			}
			else if (a[m] < x)
				l = m + 1;
			else
				r = m - 1;
		}
		(flag) ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}

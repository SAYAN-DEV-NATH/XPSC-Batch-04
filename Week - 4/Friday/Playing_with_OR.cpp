#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int cnt = 0;	  
	int oddCount = 0; 

	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 != 0) 
			oddCount++;

		if (i >= k)
		{						   
			if (a[i - k] % 2 != 0) 
				oddCount--;
		}

		if (i >= k - 1 && oddCount > 0)
			cnt++;
	}

	cout << cnt << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt;
	cin >> tt;
	while (tt--)
		solve();
	return 0;
}
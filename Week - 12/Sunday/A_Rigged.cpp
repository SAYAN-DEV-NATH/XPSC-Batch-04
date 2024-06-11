#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 109;

int t;
int n;
int s[N], e[N];
int main()
{
    ios::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> s[i] >> e[i];
        }

        bool ok = true;
        for (int i = 1; i < n; ++i)
            if (s[i] >= s[0] && e[i] >= e[0])
                ok = false;

        if (!ok)
        {
            puts("-1");
            continue;
        }

        cout << s[0] << endl;
    }
    return 0;
}
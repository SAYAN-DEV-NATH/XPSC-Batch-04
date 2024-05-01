#include <bits/stdc++.h> // 01-05-2024  14:58:00
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;

    if (a > b)
        swap(a, b);

    int m = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int j = a / i;
        int k = b / (n - i);

        if (j >= 1 && k >= 1)
            m = max(m, min(j, k));
    }

    cout << m << endl;

    return 0;
}
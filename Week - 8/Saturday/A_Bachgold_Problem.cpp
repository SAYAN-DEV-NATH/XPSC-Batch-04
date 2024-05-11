#include <bits/stdc++.h> // 11-05-2024  17:05:50
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        n /= 2;
        n--;
        cout << n + 1 << endl
             << 3 << ' ';
    }
    else
    {
        n /= 2;
        cout << n << endl;
    }

    for (int i = 0; i < n; i++)
        cout << 2 << ' ';

    return 0;
}
#include <bits/stdc++.h> // 14-05-2024  14:19:33
#define yes cout << "YES\n"
#define no cout << "NO\n"
using namespace std;
typedef long long int ll;

const int MAX = 1000001;
bool prime[MAX];

void sieve()
{
    prime[0] = prime[1] = true;

    for (int i = 4; i < MAX; i += 2)
    {
        prime[i] = true;
    }

    for (int i = 3; i * i <= MAX; i += 2)
    {
        if (!prime[i])
        {
            for (int j = i * i; j < MAX; j += 2 * i)
            {
                prime[j] = true;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    sieve();

    ll TC, n, r;
    cin >> TC;

    while (TC--)
    {
        cin >> n;
        r = sqrt(n);

        (!prime[r] && r * r == n) ? yes : no;
    }

    return 0;
}
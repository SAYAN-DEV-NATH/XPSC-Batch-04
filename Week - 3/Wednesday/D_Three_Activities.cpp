#include <iostream>
#include <climits>
using namespace std;

typedef long long ll;

void solve()
{
    int n;
    cin >> n;
    if (n <= 0)
    {
        cout << "Invalid input\n";
        return;
    }

    ll firstMax = INT_MIN, secondMax = INT_MIN, thirdMax = INT_MIN;
    int firstIndex = 0, secondIndex = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > firstMax)
        {
            firstMax = num;
            firstIndex = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > secondMax && (firstMax != num || i != firstIndex))
        {
            secondMax = num;
            secondIndex = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num > thirdMax && (num != firstMax || i != firstIndex) && (num != secondMax || i != secondIndex))
        {
            thirdMax = num;
        }
    }
    cout << firstMax + secondMax + thirdMax << endl;
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

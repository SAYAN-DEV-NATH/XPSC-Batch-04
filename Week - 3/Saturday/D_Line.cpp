//  Creator: Sayan Dev Nath
//  Created: 2024-03-31   10:41:57
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (i < (n / 2))
                s[i] = 'R';
            else
                s[i] = 'L';

            long long sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'L')
                    sum += j;
                else
                    sum += (n - j - 1);
            }
            cout << sum << " ";
        }
        cout << '\n';
    }

    return 0;
}
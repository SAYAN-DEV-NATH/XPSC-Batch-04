//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                            long long int n, long long int k);

// Driver program to test above functions
int main()
{
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int A[], long long int N, long long int K)
{
    vector<long long int> res;
    queue<long long int> q;
    long long int x = 0, y = 0;
    while (y < N)
    {

        if (A[y] < 0)
            q.push(A[y]);
        if ((y - x + 1) == K)
        {
            res.push_back(!q.empty() ? q.front() : 0);
            if (A[x] == q.front())
                q.pop();
            x++;
            y++;
        }
        else
        {
            y++;
        }
    }
    return res;
}
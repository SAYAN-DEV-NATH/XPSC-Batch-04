//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool isAllZero(vector<int> count)
    {
        for (int &i : count)
        {
            if (i != 0)
                return false;
        }
        return true;
    }
    int search(string pat, string txt)
    {
        vector<int> count(26, 0);

        for (char &ch : pat)
            count[ch - 'a']++;

        int i = 0, j = 0;
        int n = txt.size();
        int k = pat.size();
        int ans = 0;

        while (j < n)
        {
            count[txt[j] - 'a']--;

            if (j - i + 1 == k)
            {
                if (isAllZero(count))
                {
                    ans++;
                }

                count[txt[i] - 'a']++;
                i++;
            }
            j++;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends
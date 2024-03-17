#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
const int N = 10e5;
int dp[N];

bool knapsack(ll a, ll b, ll c)
{
    if(c <= 0)  return c==0;
    if(dp[c] != -1) return dp[c];

    bool op1 = knapsack(a, b, c-a);
    bool op2 = knapsack(a, b, c-b);
    return dp[c] = op1 or op2;
    
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ll a, b, c; cin >> a >> b >> c;
    memset(dp, -1, sizeof(dp));
    
    if(knapsack(a, b, c)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
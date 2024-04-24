#include <bits/stdc++.h> // 24-04-2024  19:54:23
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll TestCase; cin >> TestCase; while(TestCase--)
    {
        ll a, b, n; cin >> a >> b >> n;
        ll ans = 0;
        if(b>=a)
        {
            ans=a;
            b=a;
        }
        else ans=b;
        for(int i=0; i<n; i++)
        {
            ll x; cin >> x;
            if(x+1<=a) ans+=x;
            else ans+=(a-1);
        }
        cout << ans << endl;
    }

    return 0;
}
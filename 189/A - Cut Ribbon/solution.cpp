#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;
 
    vector<int> dp(200005, 0);
    dp[a] = 1, dp[b] = 1, dp[c] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] > 0)
        {
            if (i + a <= n)
                dp[i + a] = max(1 + dp[i], dp[i + a]);
            if (i + b <= n)
                dp[i + b] = max(1 + dp[i], dp[i + b]);
            if (i + c <= n)
                dp[i + c] = max(1 + dp[i], dp[i + c]);
        }
    }
    
    // for(auto i:dp) cout<<i<<" ";
    cout << dp[n];
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    vector<vector<int>> dp(n + 1, vector<int> (3, 1e9));
 
    for (int i = 0; i < 3; i++)
        dp[0][i] = 0;
 
    for (int i = 1; i <= n; i++)
    {
        dp[i][0] = 1 + min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        if (arr[i] == 0)
        {
        }
        else if (arr[i] == 1)
        {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
        else if (arr[i] == 2)
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }
        else
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
    }
 
    cout << min({dp[n][0], dp[n][1], dp[n][2]});
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
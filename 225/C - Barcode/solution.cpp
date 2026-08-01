#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
 
    vector<vector<char>> grid(n + 1, vector<char>(m + 1));
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
 
    vector<int> white(m + 1, 0), black(m + 1, 0);
 
    for (int idx = 1; idx <= m; idx++)
    {
        int b = 0;
        for (int row = 1; row <= n; row++)
        {
            b += grid[row][idx] == '#';
        }
 
        white[idx] = b;
        black[idx] = n - b;
    }
 
    partial_sum(begin(white), end(white), begin(white));
    partial_sum(begin(black), end(black), begin(black));
 
    // for(auto i:white) cout<<i<<" ";
    // cout<<'
';
    // for(auto i:black) cout<<i<<" ";
 
    vector<vector<int>> dp(m + 1, vector<int>(2, 1e9));
 
    dp[0][0] = 0;
    dp[0][1] = 0;
 
    for (int idx = x; idx <= m; idx++)
    {
        for (int len = x; len <= y; len++)
        {
            if (idx - len >= 0)
            {
                if (dp[idx - len][1] != 1e9)
                    dp[idx][0] = min(dp[idx][0], dp[idx - len][1] + black[idx] - black[idx - len]);
                if (dp[idx - len][0] != 1e9)
                    dp[idx][1] = min(dp[idx][1], dp[idx - len][0] + white[idx] - white[idx - len]);
            }
        }
    }
 
    cout << min(dp[m][0], dp[m][1]);
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
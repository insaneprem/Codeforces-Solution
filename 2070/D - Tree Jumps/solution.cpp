#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 998244353;
void solve()
{
    int n;
    cin >> n;
 
    vector<int> parent(n + 1);
    for (int i = 2; i <= n; i++)
        cin >> parent[i];
 
    vector<int> depth(n + 1);
    vector<vector<int>> childdepth(n + 1);
 
    for (int i = 2; i <= n; i++)
    {
        depth[i] = depth[parent[i]] + 1;
        childdepth[depth[i]].push_back(i);
    }
 
    int maxdepth = *max_element(depth.begin(), depth.end());
 
    vector<int> dp(n + 1, 0);
    dp[1] = 1;
 
    int ans = 1;
    int prev = 1;
 
    for (int d = 1; d <= maxdepth; d++)
    {
        int curr = 0;
 
        for (auto e : childdepth[d])
        {
            if (parent[e] == 1)
            {
                dp[e] = prev;
            }
            else
            {
                dp[e] = prev;
                dp[e] = (dp[e] - dp[parent[e]] + MOD) % MOD;
            }
            curr = (curr + dp[e]) % MOD;
            ans = (ans + dp[e]) % MOD;
        }
 
        prev = curr;
    }
 
    cout << ans;
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int dp[17][2][2][29];
int dfs(int pos, string &lower, string &upper, int tightl, int tightu, int cost)
{
    if (pos == lower.size())
        return cost;
 
    if (dp[pos][tightl][tightu][cost] != -1)
        return dp[pos][tightl][tightu][cost];
 
    int lb = (tightl) ? lower[pos] - '0' : 0;
    int ub = (tightu) ? upper[pos] - '0' : 9;
 
    int ans = INT_MAX;
    for (int dig = lb; dig <= ub; dig++)
    {
        int ntightl = (tightl & (dig == lower[pos] - '0'));
        int ntightu = (tightu & (dig == upper[pos] - '0'));
        ans = min(ans, dfs(pos + 1, lower, upper, ntightl, ntightu, cost + (dig == lower[pos] - '0') + (dig == upper[pos] - '0')));
    }
 
    return dp[pos][tightl][tightu][cost] = ans;
}
void solve()
{
    int a, b;
    cin >> a >> b;
 
    string stra = to_string(a);
    string strb = to_string(b);
 
    memset(dp, -1, sizeof(dp));
    int ans = dfs(0, stra, strb, 1, 1, 0);
 
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
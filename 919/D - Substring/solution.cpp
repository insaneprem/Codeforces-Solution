#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
string str;
vector<vector<int>> dp;
vector<int> visited;
void dfs(int node, vector<int> adj[])
{
    visited[node] = 1;
 
    for (auto e : adj[node])
    {
        if (visited[e] == 1)
        {
            cout << -1;
            exit(0);
        }
        else if (visited[e] == 0)
            dfs(e, adj);
 
        for (int i = 0; i < 26; i++)
        {
            dp[node][i] = max(dp[node][i], dp[e][i]);
        }
    }
 
    dp[node][str[node - 1] - 'a']++;
    visited[node] = 2;
}
void solve()
{
    int n, m;
    cin >> n >> m;
 
    cin >> str;
 
    vector<int> adj[n + 1];
    bool isselfloop = false;
 
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        isselfloop |= (u == v);
    }
 
    if (isselfloop)
    {
        cout << -1;
        return;
    }
 
    visited.resize(n + 1, 0);
    dp.resize(n + 1, vector<int>(26, 0));
 
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i, adj);
        }
    }
 
    int ans = 1;
    for (auto vec : dp)
    {
        int rowmax = *max_element(begin(vec), end(vec));
        ans = max(ans, rowmax);
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
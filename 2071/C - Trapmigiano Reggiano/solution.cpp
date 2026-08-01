#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
vector<vector<int>> adj;
vector<int> dist;
 
void dfs(int node, int parent)
{
    for (int nxt : adj[node])
    {
        if (nxt == parent)
            continue;
        dist[nxt] = dist[node] + 1;
        dfs(nxt, node);
    }
}
 
void solve()
{
    int n, st, en;
    cin >> n >> st >> en;
 
    adj.assign(n + 1, vector<int>());
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    dist.assign(n + 1, -1);
    dist[en] = 0;
    dfs(en, -1);
 
    vector<int> ans;
    for (int i = 1; i <= n; i++)
        ans.push_back(i);
 
    sort(ans.begin(), ans.end(), [&](int a, int b)
         { return dist[a] > dist[b]; });
 
    for (auto i : ans)
        cout << i << " ";
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
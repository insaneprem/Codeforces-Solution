#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> visited, parent, depth;
int n, m, k;
void dfs(int node, int par, int d, vector<int> adj[])
{
    visited[node] = 1;
    parent[node] = par;
    depth[node] = d;
 
    for (auto e : adj[node])
    {
        if (e == par)
            continue;
 
        if (visited[e])
        {
            int cycle_length = depth[node] - depth[e] + 1;
 
            if (cycle_length >= k + 1)
            {
                cout << cycle_length << "
";
 
                while (node != e)
                {
                    cout << node << " ";
                    node = parent[node];
                }
                cout << node << " ";
 
                exit(0);
            }
        }
        else
            dfs(e, node, d + 1, adj);
    }
}
void solve()
{
    cin >> n >> m >> k;
 
    visited.resize(n + 1, 0);
    parent.resize(n + 1, 0);
    depth.resize(n + 1, 0);
 
    vector<int> adj[n + 1];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i, 0, 0, adj);
        }
    }
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
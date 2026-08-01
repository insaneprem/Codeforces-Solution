#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int dfs(int node, vector<int> &visited, vector<int> adj[])
{
    visited[node] = 1;
    int size = 1;
 
    for (auto e : adj[node])
    {
        if (!visited[e])
        {
            size += dfs(e, visited, adj);
        }
    }
 
    return size;
}
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> visited(n + 1, 0);
    vector<int> adj[n + 1];
 
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
 
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
 
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            int size = dfs(i, visited, adj);
            ans *= (1LL << (size - 1));
        }
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void dfs(int node, vector<int> adj[], vector<int> &color, int c)
{
    color[node] = c;
 
    for (auto e : adj[node])
    {
        if (color[e] == -1)
        {
            color[e] = !color[node];
            dfs(e, adj, color, !c);
        }
    }
}
void solve()
{
    int n;
    cin >> n;
 
    vector<int> adj[n + 1];
 
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<int> color(n + 1, -1);
 
    dfs(1, adj, color, 0);
 
    int zerocnt = count(begin(color), end(color), 0);
    int onecnt = n - zerocnt;
 
    cout << (zerocnt * onecnt) - (n - 1);
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
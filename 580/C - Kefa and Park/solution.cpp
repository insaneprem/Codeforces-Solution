#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int dfs(int node, int par, vector<int> adj[], vector<int> &cats, int curr, int m)
{
    if (curr > m)
        return 0;
 
    bool isleaf = true;
 
    int ans = 0;
    for (auto e : adj[node])
    {
        if (e == par)
            continue;
          
        isleaf = false;
        
        int nextcurr = cats[e] ? curr + 1 : 0;
 
        ans += dfs(e, node, adj, cats, nextcurr , m);
    }
    
    if(isleaf) return curr<=m;
 
    return ans;
}
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> cats(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> cats[i];
 
    vector<int> adj[n + 1];
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    cout<<dfs(1, 0, adj, cats, cats[1], m);
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
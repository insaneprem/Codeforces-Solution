#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool dfs(int node, int parent, vector<int> &visited, vector<set<int>> &adj)
{
    visited[node] = 1;
 
    for (auto e : adj[node])
    {
        if(!visited[e]) {
            if(dfs(e,node,visited,adj)) return true;
        }
        else if(e != parent) return true;
    }
 
    return false;
}
void solve()
{
    int n;
    cin >> n;
 
    vector<set<int>> adj(n+1);
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
 
        adj[i + 1].insert(v);
        adj[v].insert(i+1);
    }
 
    vector<int> visited(n + 1, 0);
    int cycle = 0, x = 0;
 
    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            if (dfs(i, -1, visited, adj))
                cycle++;
            else
                x++;
 
        }
 
    }
    
    cout << cycle + min(1LL, x) << " " << cycle + x;
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
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
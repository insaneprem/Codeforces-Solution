#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> adj[n + 1], indegree(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
 
        adj[u].push_back(v);
        adj[v].push_back(u);
 
        indegree[u]++;
        indegree[v]++;
    }
 
    queue<int> q;
 
    for (int i = 1; i <= n; i++)
    {
        if (indegree[i] == 1)
            q.push(i);
    }
 
    int ans = 0;
 
    while (!q.empty())
    {
        int qsize = q.size();
 
        for (int i = 0; i < qsize; i++)
        {
            int node = q.front();
            q.pop();
            indegree[node] = 0;
 
            for (auto v : adj[node])
            {
                --indegree[v];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (indegree[i] == 1)
                q.push(i);
        }
        ans++;
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
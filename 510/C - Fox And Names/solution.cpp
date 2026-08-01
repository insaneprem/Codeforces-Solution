#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> ans;
void dfs(int node, vector<int> adj[], vector<int> &visited)
{
    visited[node] = 1;
 
    for (auto e : adj[node])
    {
        if (visited[e] == 0)
        {
            dfs(e, adj, visited);
        }
        else if (visited[e] == 1)
        {
            cout << "Impossible";
            exit(0);
        }
    }
 
    visited[node] = 2;
    ans.push_back(node);
}
void solve()
{
    int n;
    cin >> n;
 
    vector<string> str(n);
    for (auto &i : str)
        cin >> i;
 
    vector<int> adj[26];
 
    for (int i = 1; i < n; i++)
    {
        int j = 0;
 
        while (j < min(str[i].size(), str[i - 1].size()) && str[i][j] == str[i - 1][j])
            j++;
 
        if (j >= str[i].size())
        {
            cout << "Impossible";
            exit(0);
        }
 
        if (j < str[i - 1].size())
        {
            adj[str[i - 1][j] - 'a'].push_back(str[i][j] - 'a');
        }
    }
 
    vector<int> visited(26, 0);
 
    for (int i = 0; i < 26; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i, adj, visited);
        }
    }
 
    reverse(begin(ans), end(ans));
    for (auto ch : ans)
        cout << (char(ch + 'a'));
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
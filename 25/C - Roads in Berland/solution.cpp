#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<vector<int>> dist(n, vector<int>(n));
 
    for (auto &i : dist)
    {
        for (auto &j : i)
            cin >> j;
    }
 
    int k;
    cin >> k;
 
    while (k--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        u--, v--;
 
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
 
                dist[i][j] = min({dist[i][j], dist[i][u] + w + dist[v][j], dist[i][v] + w + dist[u][j]});
                ans += dist[i][j];
            }
        }
 
        cout << ans / 2 << "
";
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
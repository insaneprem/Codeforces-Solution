#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<vector<int>> levels(n);
    int maxdist = 0;
    for (int i = 1; i <= n; i++)
    {
        int d;
        cin >> d;
 
        if (d >= n)
        {
            cout << -1;
            return;
        }
 
        levels[d].push_back(i);
        maxdist = max(maxdist, d);
    }
 
    if (levels[0].size() != 1)
    {
        cout << -1;
        return;
    }
 
    for (int i = 0; i < maxdist; i++)
    {
        if (levels[i].size() == 0)
        {
            cout << -1;
            return;
        }
    }
 
    for (int i = 1; i <= maxdist; i++)
    {
        int parent_capacity = (i == 1) ? k : (levels[i - 1].size() * (k - 1));
 
        if (levels[i].size() > parent_capacity)
        {
            cout << -1;
            return;
        }
    }
 
    vector<pair<int, int>> adj;
 
    for (int i = 1; i <= maxdist; i++)
    {
        int parent_slot = (i == 1) ? k : k - 1;
        for (int j = 0; j < levels[i].size(); j++)
        {
            int child = levels[i][j];
            int parent = levels[i - 1][j / parent_slot];
            adj.push_back({parent, child});
        }
    }
 
    cout << adj.size() << "
";
    for (auto [u, v] : adj)
    {
        cout << u << " " << v << "
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
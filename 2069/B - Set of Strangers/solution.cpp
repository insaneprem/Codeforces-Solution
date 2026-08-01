#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    map<int, bool> mpp;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            int col = grid[i][j];
            if (mpp.find(col) == mpp.end())
            {
                mpp[col] = false; 
            }
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int col = grid[i][j];
            if (j + 1 < m && grid[i][j + 1] == col)
                mpp[col] = true;
            if (i + 1 < n && grid[i + 1][j] == col)
                mpp[col] = true;
        }
    }
 
    int total = 0, best = 0;
    for (auto &i : mpp)
    {
        int val = i.second ? 2 : 1;
        total += val;
        best = max(best, val);
    }
 
    cout << total - best ;
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
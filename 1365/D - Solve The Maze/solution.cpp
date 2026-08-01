#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> vis(n, vector<int>(m, 0));
    vector<vector<char>> grid(n, vector<char>(m, '.'));
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
 
    int good = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool gpresent = 0;
            char ch = grid[i][j];
 
            if (ch == '#')
                vis[i][j] = 1;
            else if (ch == 'G')
                good++;
            else if (ch == 'B')
            {
                vis[i][j] = 1;
 
                if (i - 1 >= 0)
                {
                    vis[i - 1][j] = 1;
                    if (grid[i - 1][j] == 'G')
                        gpresent = 1;
                }
                if (i + 1 < n)
                {
                    vis[i + 1][j] = 1;
                    if (grid[i + 1][j] == 'G')
                        gpresent = 1;
                }
                if (j - 1 >= 0)
                {
                    vis[i][j - 1] = 1;
                    if (grid[i][j - 1] == 'G')
                        gpresent = 1;
                }
                if (j + 1 < m)
                {
                    vis[i][j + 1] = 1;
                    if (grid[i][j + 1] == 'G')
                        gpresent = 1;
                }
            }
 
            if (gpresent)
            {
                cout << "NO";
                return;
            }
        }
    }
 
    if (grid[n - 1][m - 1] == 'B' || (good && vis[n - 1][m - 1]))
    {
        cout << "NO";
        return;
    }
 
    queue<pair<int, int>> q;
    q.push({n - 1, m - 1});
    vis[n - 1][m - 1] = 1;
 
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
 
    while (!q.empty())
    {
        auto node = q.front();
        q.pop();
 
        int i = node.first;
        int j = node.second;
 
        for (int d = 0; d < 4; d++)
        {
            int ni = i + dx[d];
            int nj = j + dy[d];
 
            if (ni >= 0 && ni < n && nj >= 0 && nj < m && !vis[ni][nj])
            {
                vis[ni][nj] = 1;
                q.push({ni, nj});
            }
        }
    }
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'G' && !vis[i][j])
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int n, m;
int dirs[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
bool cycle = false;
bool isValid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < m);
}
void bfs(int x, int y, int px, int py, vector<vector<char>> &grid, vector<vector<int>> &visited)
{
    queue<tuple<int, int, int, int>> q;
    q.push({x, y, px, py});
 
    visited[x][y] = 1;
 
    while (!q.empty())
    {
        auto [i, j, pi, pj] = q.front();
        q.pop();
 
        for (int d = 0; d < 4; d++)
        {
            int ni = i + dirs[d][0];
            int nj = j + dirs[d][1];
            if (!isValid(ni, nj) || grid[ni][nj] != grid[i][j])
                continue;
 
            if (!visited[ni][nj])
            {
                visited[ni][nj] = 1;
                q.push({ni, nj, i, j});
            }
            else if (!(ni == pi && nj == pj))
            {
                cycle = true;
                return;
            }
        }
    }
}
void solve()
{
    cin >> n >> m;
 
    vector<vector<char>> grid(n, vector<char>(m));
 
    for (auto &i : grid)
    {
        for (auto &j : i)
            cin >> j;
    }
 
    vector<vector<int>> visited(n, vector<int>(m, 0));
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                bfs(i, j, -1, -1, grid, visited);
            }
            if (cycle)
                break;
        }
        if (cycle)
            break;
    }
 
    cout << (cycle ? "Yes" : "No");
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
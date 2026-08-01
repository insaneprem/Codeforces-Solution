#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
pair<bool, pair<int, int>> check(int num, vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();
 
    vector<int> arr(256, -1);
    for (int i = 0; i < n; i++)
    {
        int mask = 0;
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] >= num)
                mask |= (1 << j);
        }
 
        arr[mask] = i;
    }
 
    for (int i = 0; i < 256; i++)
    {
        for (int j = 0; j < 256; j++)
        {
            if (((i | j) == ((1 << m) - 1)) && (arr[i] != -1 && arr[j] != -1)) return {true,{arr[i],arr[j]}};
        }
    }
 
    return {false, {-1, -1}};
}
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> grid(n, vector<int>(m));
 
    for (auto &i : grid)
    {
        for (auto &j : i)
            cin >> j;
    }
 
    int l = 0, r = 1e10;
 
    while (l <= r)
    {
        int mid = (l + r) >> 1;
 
        if (check(mid, grid).first)
        {
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    pair<int, int> ans = check(r, grid).second;
    cout << ans.first + 1 << " " << ans.second + 1;
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
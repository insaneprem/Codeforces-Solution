#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<int>> grid(n + 1, vector<int>(m + 1, 0));
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
 
    vector<int> row(n + 1), col(m + 1);
 
    iota(begin(row), end(row), 0);
    iota(begin(col), end(col), 0);
 
    for (int i = 0; i < k; i++)
    {
        char ch;
        int x, y;
        cin >> ch >> x >> y;
 
        if (ch == 'r')
        {
            swap(row[x], row[y]);
        }
        else if (ch == 'c')
        {
            swap(col[x], col[y]);
        }
        else
        {
            cout << grid[row[x]][col[y]] << "
";
        }
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
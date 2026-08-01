#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
    char president;
    cin >> president;
 
    vector<vector<char>> grid(n + 2, vector<char>(m + 2, '.'));
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
 
    set<char> st;
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (grid[i][j] == president)
            {
                if (grid[i - 1][j] != '.' && grid[i - 1][j] != president)
                    st.insert(grid[i - 1][j]);
                if (grid[i + 1][j] != '.' && grid[i + 1][j] != president)
                    st.insert(grid[i + 1][j]);
                if (grid[i][j - 1] != '.' && grid[i][j - 1] != president)
                    st.insert(grid[i][j - 1]);
                if (grid[i][j + 1] != '.' && grid[i][j + 1] != president)
                    st.insert(grid[i][j + 1]);
            }
        }
    }
 
    cout << st.size();
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
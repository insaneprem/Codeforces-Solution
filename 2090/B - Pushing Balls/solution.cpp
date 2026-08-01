#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    for (auto &i : grid)
        cin >> i;
 
    vector<vector<int>> rowprefix(n, vector<int>(m + 1, 0)),colprefix(m, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            rowprefix[i][j + 1] = rowprefix[i][j] + (grid[i][j] == '1' ? 1 : 0);
        
    for (int j = 0; j < m; j++)
        for (int i = 0; i < n; i++)
            colprefix[j][i + 1] = colprefix[j][i] + (grid[i][j] == '1' ? 1 : 0);
        
    
 
    bool flag = 1;
    for (int i = 0; i < n && flag; i++)
    {
        for (int j = 0; j < m && flag; j++)
        {
            if (grid[i][j] == '1')
            {
                int leftsum = rowprefix[i][j];
                if (leftsum == j)
                    continue;
 
                int upsum = colprefix[j][i];
                if (upsum == i)
                    continue;
 
                flag = 0;
            }
        }
    }
 
    cout << (flag ? "Yes" : "No");
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
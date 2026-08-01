#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, x;
    cin >> n >> m >> x;
 
    vector<vector<char>> grid(n + 1, vector<char>(m + 1));
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> grid[i][j];
        }
    }
 
    vector<vector<pair<int, int>>> lower(27);
    vector<ld> upper(27);
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (grid[i][j] == 'S')
                lower[26].push_back({i, j});
            else
                lower[grid[i][j] - 'a'].push_back({i, j});
        }
    }
 
    for (int i = 0; i < 26; i++)
    {
        ld ans = 1e9;
        for (int j = 0; j < lower[i].size(); j++)
        {
            auto [x1, y1] = lower[i][j];
 
            for (auto [x2, y2] : lower[26])
            {
                ld dist = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
 
                ans = min(ans, dist);
            }
        }
        upper[i] = ans;
    }
 
    int sz;
    cin >> sz;
 
    string str;
    cin >> str;
 
    // for(auto i:upper) cout<<i<<" ";
    // cout<<endl;
    int ans = 0;
    for (auto i : str)
    {
        if (i >= 'A' && i <= 'Z')
        {
            if (upper[i - 'A'] == 1e9)
            {
                cout << -1;
                return;
            }
            else
            {
                // cout<<upper[i - 'A']<<" ";
                ans += upper[i - 'A'] > x;
            }
        }
        else
        {
            if (lower[i - 'a'].size() == 0)
            {
                cout << -1;
                return;
            }
        }
    }
 
    cout << ans;
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
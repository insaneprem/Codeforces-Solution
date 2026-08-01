#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<tuple<int, int, int>> arr(k);
 
    for (auto &[a, b, c] : arr)
        cin >> a >> b >> c;
 
    set<pair<int, int>> st;
 
    vector<vector<int>> grid(n + 1, vector<int>(m + 1, 0));
    for (int i = k - 1; i >= 0; i--)
    {
        auto [command, dir, color] = arr[i];
 
        if (st.find({command, dir}) != st.end())
            continue;
 
        if (command == 1)
        {
            for (int j = 0; j <= m; j++)
                if (grid[dir][j] == 0)
                    grid[dir][j] = color;
        }
        else
        {
            for (int i = 0; i <= n; i++)
                if (grid[i][dir] == 0)
                    grid[i][dir] = color;
        }
 
        st.insert({command, dir});
    }
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << grid[i][j] << " ";
        }
 
        cout << endl;
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
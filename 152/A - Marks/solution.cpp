#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<vector<char>> grid(n, vector<char>(m));
 
    for (auto &i : grid)
    {
        for (auto &j : i)
            cin >> j;
    }
 
    int ans = 0;
    vector<int> winners(n);
    for (int j = 0; j < m; j++)
    {
        map<int,vector<int>> mp;
        for (int i = 0; i < n; i++)
        {
            int dig = grid[i][j] - '0', cand = i;
            mp[dig].push_back(cand);
        }
 
        for(auto i:mp.rbegin()->second){
            winners[i]=1;
        }
    }
    
    ans  = accumulate(begin(winners),end(winners),0LL);
    cout<<ans;
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
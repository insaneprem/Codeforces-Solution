#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<pair<int, int>> arr(n);
 
    for (auto &i : arr)
        cin >> i.first >> i.second;
 
    if (n == 1)
    {
        cout << 1;
        return;
    }
 
    vector<vector<int>> dp(n, vector<int>(3, 0));
 
    dp[0][0] = 1, dp[0][2] = (arr[0].first + arr[0].second < arr[1].first);
 
    for (int i = 1; i < n; i++)
    {
        int currleft = arr[i].first - arr[i].second;
        int prevright = arr[i - 1].first + arr[i - 1].second;
 
        dp[i][1] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
 
        if (currleft > arr[i - 1].first)
        {
            dp[i][0] = max({dp[i][0], 1 + dp[i - 1][0], 1 + dp[i - 1][1]});
        }
 
        if (currleft > prevright)
            dp[i][0] = max(dp[i][0], 1 + dp[i - 1][2]);
 
        dp[i][2] = max({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]}) + ((i < n - 1) ? (arr[i].first + arr[i].second < arr[i + 1].first) : 1);
    }
 
    // for(auto i:dp){
    //   for(auto j:i) cout<<j<<" ";
    //   cout<<endl;
    // }
 
    cout << max({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]});
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
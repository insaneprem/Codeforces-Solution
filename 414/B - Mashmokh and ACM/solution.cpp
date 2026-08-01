#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1e9+7;
vector<int> findFact(int n)
{
    vector<int> fact;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.push_back(i);
            if (n / i != i)
                fact.push_back(n / i);
        }
    }
    sort(begin(fact), end(fact));
 
    return fact;
}
void solve()
{
    int limit, n;
    cin >> limit >> n;
 
    vector<vector<int>> dp(n, vector<int>(limit + 1, 0));
 
    for (int i = 1; i <= limit; i++)
        dp[0][i] = 1;
 
    vector<vector<int>> fact(limit + 1);
 
    for (int i = 1; i <= limit; i++)
    {
        fact[i] = findFact(i);
    }
 
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= limit; j++)
        {
            for (auto f : fact[j])
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][f]) % MOD;
            }
        }
    }
 
    int ans = 0;
    for (int i = 1; i <= limit; i++)
        ans = (ans +  dp[n - 1][i]) % MOD;
 
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
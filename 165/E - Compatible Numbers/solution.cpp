#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    vector<int> dp((1 << 22), -1);
 
    for (auto num : arr)
    {
        dp[num ^ ((1 << 22) - 1)] = num;
    }
 
    for (int i = 0; i < 22; i++)
    {
        for (int mask = ((1 << 22) - 1); mask >= 0; mask--)
        {
            if (mask & (1 << i))
            {
                if (dp[mask ^ (1 << i)] == -1)
                {
                    dp[mask ^ (1 << i)] = dp[mask];
                }
            }
        }
    }
 
    for (auto i : arr)
    {
        cout << dp[i] << " ";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    vector<int> dp(100005, 0);
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int ans = 1;
 
    for (auto num : arr)
    {
        vector<int> primes;
        int t = num;
        for (int i = 2; i * i <= num; i++)
        {
            if (t % i == 0)
            {
                primes.push_back(i);
                while (t % i == 0)
                    t /= i;
            }
        }
 
        if (t > 1)
            primes.push_back(t);
 
        int val = 0;
 
        for (auto i : primes)
            val = max(val, 1 + dp[i]);
 
        ans = max(val, ans);
 
        for (auto i : primes)
            dp[i] = max(dp[i], val);
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
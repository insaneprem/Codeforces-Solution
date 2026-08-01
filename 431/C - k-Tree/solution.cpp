#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1e9 + 7;
int dp1[107], dp2[107];
void solve()
{
    int n, k, d;
    cin >> n >> k >> d;
 
    memset(dp1, sizeof(dp1), 0);
    memset(dp2, sizeof(dp2), 0);
    dp1[0] = 1;
    dp2[0] = 1;
 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j >= 0)
                dp1[i] = (dp1[i] + dp1[i - j]) % MOD;
        }
 
        for (int j = 1; j <= d - 1; j++)
        {
            if (i - j >= 0)
                dp2[i] = (dp2[i] + dp2[i - j]) % MOD;
        }
    }
 
    cout << (dp1[n] - dp2[n] + MOD) % MOD;
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
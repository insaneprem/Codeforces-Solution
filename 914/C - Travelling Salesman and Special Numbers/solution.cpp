#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
map<int, int> ops;
string str;
int k;
const int MOD = 1e9 + 7;
int dp[1007][2][2][1007];
int cnt = 0;
int rec(int pos, int tight, int isStarted, int setCnt)
{
    cnt++;
    if (pos == str.size())
    {
        return isStarted && 1 + ops[setCnt] == k;
    }
 
    if (dp[pos][tight][isStarted][setCnt] != -1)
        return dp[pos][tight][isStarted][setCnt];
 
    int ub = tight ? str[pos] - '0' : 1;
 
    int ans = 0;
    for (int dig = 0; dig <= ub; dig++)
    {
        ans = (ans + rec(pos + 1, tight & (dig == ub), isStarted | (dig == 1), setCnt + (dig == 1))) % MOD;
    }
 
    return dp[pos][tight][isStarted][setCnt] = ans % MOD;
}
void solve()
{
    cin >> str >> k;
 
    // cout<<str;
 
    ops[1] = 0;
    if (k == 0)
    {
        cout << 1;
        return;
    }
    memset(dp, -1, sizeof(dp));
 
    for (int i = 2; i <= 1000; i++)
    {
        ops[i] = ops[__builtin_popcount(i)] + 1;
    }
 
    int ans = (rec(0, 1, 0, 0) - (k == 1) + MOD) % MOD;
 
    cout << ans % MOD;
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
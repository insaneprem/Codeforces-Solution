#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int dp[19][2][4];
int rec(string num, int pos, int tight, int cnt)
{
    if (pos == num.size())
        return 1;
 
    if (dp[pos][tight][cnt] != -1)
        return dp[pos][tight][cnt];
    
    
    int ub = tight ? num[pos] - '0' : 9;
 
    int ans = 0;
    for (int dig = 0; dig <= ub; dig++)
    {
        if (cnt == 3 && dig != 0)
            continue;
 
        ans = ans + rec(num, pos + 1, (tight) & (ub == dig), cnt + (dig > 0));
    }
 
    return dp[pos][tight][cnt] = ans;
}
void solve()
{
    int l, r;
    cin >> l >> r;
    memset(dp,-1,sizeof(dp));
    int val1 = rec(to_string(r), 0, 1, 0);
    memset(dp,-1,sizeof(dp));
    cout <<  val1 - rec(to_string(l - 1), 0, 1, 0);
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
    cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
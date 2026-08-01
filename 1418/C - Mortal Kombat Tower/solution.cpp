#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MAXN = 2e5 + 7;
int dp[MAXN][2];
int rec(int idx, int turn, int n, vector<int> &arr)
{
    if (idx >= n)
        return 0;
 
    int ans = INT_MAX;
    if (dp[idx][turn] != -1)
        return dp[idx][turn];
    if (turn == 0)
    {
        int val1 = arr[idx] + arr[idx + 1] + rec(idx + 2, 1, n, arr);
        int val2 = arr[idx] + rec(idx + 1, 1, n, arr);
        ans = min({val1, val2});
    }
    else
    {
        int val1 = rec(idx + 2, 0, n, arr);
        int val2 = rec(idx + 1, 0, n, arr);
        ans = min({val1, val2});
    }
 
    return dp[idx][turn] = ans;
}
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    for (int i = 0; i <= n; ++i)
    {
        dp[i][0] = -1;
        dp[i][1] = -1;
    }
 
    arr.push_back(0);
 
    cout << rec(0, 0, n, arr);
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
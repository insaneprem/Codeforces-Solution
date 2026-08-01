#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    vector<int> dp(n + 1);
    dp[1] = -1;
 
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == arr[i - 1])
            dp[i] = dp[i - 1];
        else
            dp[i] = i - 1;
    }
 
    int q;
    cin >> q;
 
    while (q--)
    {
        int l, r;
        cin >> l >> r;
 
        if(dp[r] == -1 || dp[r]<l){
            cout<<"-1 -1";
        }
        else cout<<r<<" "<<dp[r];
 
        cout<<"
";
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
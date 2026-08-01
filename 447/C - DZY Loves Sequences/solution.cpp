#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    if (n == 1)
    {
        cout << 1;
        return;
    }
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    vector<int> dp1(n, 1), dp2(n, 1);
 
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] < arr[i])
            dp1[i] = 1 + dp1[i - 1];
    }
 
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i + 1] > arr[i])
            dp2[i] = 1 + dp2[i + 1];
    }
 
    int ans = 1;
    for (int i = 1; i <= n - 2; i++)
    {
        if (arr[i + 1] - arr[i - 1] >= 2)
            ans = max(ans, dp2[i + 1] + dp1[i - 1] + 1);
 
        ans = max({ans, 1 + dp1[i - 1], 1 + dp2[i + 1]});
    }
 
    ans = max({ans, 1 + dp2[1], 1 + dp1[n - 2]});
 
    // for(auto i:dp1) cout<<i<<" ";
    // cout<<endl;
    // for(auto i:dp2) cout<<i<<" ";
    // cout<<endl;
 
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
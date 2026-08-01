#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    map<int, int> sum, diff;
 
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
 
        sum[x + y]++;
        diff[x - y]++;
    }
 
    int ans = 0;
 
    for (auto [_, val] : sum)
        ans += val * (val - 1) / 2;
      
    for (auto [_, val] : diff)
        ans += val * (val - 1) / 2;
    
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
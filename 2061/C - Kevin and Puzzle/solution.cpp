#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 998244353;
void solve()
{
    int n;
 
    cin >> n;
 
    vector<int> nums(n);
 
    for(auto &i:nums) cin>>i;
 
    unordered_map<int, int> first, second;
 
    first[0] = 1;
 
    for (int i = 0; i < n; i++) {
      int val = nums[i];
      int k = (first[val] + second[val]) % mod;
      unordered_map<int, int> third, fourth;
 
      if (k > 0) third[val] = k;
 
      for (auto& [l, c] : first) fourth[l + 1] = (fourth[l + 1] + c) % mod;
 
      first = move(third);
      second = move(fourth);
    }
    int ans = 0;
    for (auto& it : first)
      ans = (ans + it.second) % mod;
    for (auto& it: second) ans = (ans + it.second) % mod;
    cout << ans ;
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
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
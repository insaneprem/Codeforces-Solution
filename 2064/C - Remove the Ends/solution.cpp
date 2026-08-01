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
 
  vector<int> prefix(n, 0), suffix(n, 0);
  prefix[0] = (arr[0] >= 0 ? arr[0] : 0);
  suffix[n - 1] = (arr[n - 1] <= 0 ? -1 * arr[n - 1] : 0);
 
  for (int i = 1; i < n; i++)
  {
    int val = arr[i] >= 0 ? arr[i] : 0;
 
    prefix[i] += prefix[i - 1] + val;
  }
 
  for (int i = n - 2; i >= 0; i--)
  {
    int val = arr[i] <= 0 ? -1 * arr[i] : 0;
    suffix[i] += suffix[i + 1] + val;
  }
 
  int ans = 0;
  for (int i = 0; i < n; i++)
    ans = max(ans, prefix[i] + suffix[i]);
 
  // for(auto i:prefix) cout<<i<<" ";
  // cout<<endl;
  // for(auto i:suffix) cout<<i<<" ";
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
  cin >> t;
  while (t--)
  {
    solve();
    cout << "
";
  }
}
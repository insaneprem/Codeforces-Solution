#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 998244353;
const int sz = 2e5 + 5;
int pow2[sz], invpow2[sz];
 
void precompute()
{
  pow2[0] = 1;
  for (int i = 1; i < sz; i++)
  {
    pow2[i] = (pow2[i - 1] * 2) % MOD;
  }
  
  int inv2 = 499122177;
  invpow2[0] = 1;
  for (int i = 1; i < sz; i++)
  {
    invpow2[i] = (1LL * invpow2[i - 1] * inv2) % MOD;
  }
}
void solve()
{
  int n;
  cin >> n;
  vector<int> arr(n);
  for (auto &i : arr)
    cin >> i;
 
  vector<int> vec(n + 1, 0);
  for (int i = 0; i < n; i++)
  {
    vec[i + 1] = vec[i] + (arr[i] == 2);
  }
 
  int sum = 0, c = 0, ans = 0;
 
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      int s = vec[i];
      sum = (sum + invpow2[s]) % MOD;
      c += 1;
    }
    else if (arr[i] == 3)
    {
      int s = vec[i];
      int val = (pow2[s] * sum) % MOD;
      val = (val - c + MOD) % MOD;
      ans = (ans + val) % MOD;
    }
  }
 
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
  cin >> t;
 
  precompute();
  while (t--)
  {
    solve();
    cout << "
";
  }
}
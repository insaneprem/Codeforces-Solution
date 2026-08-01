#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
  int n;
  cin >> n;
  string str;
  cin >> str;
 
  int prev = 0;
  int cnt = 0;
  for (auto i : str)
  {
    int val = i - '0';
    if (val != prev)
    {
      cnt++;
      prev = val;
    }
  }
 
  cout << cnt;
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
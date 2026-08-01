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
 
  map<int, int> freq;
  for (auto &i : arr)
    freq[i]++;
 
  int l = 0;
  int maxlen = 0;
  pair<int, int> best = {0, 0};
 
  for (int i = 0; i < n; i++)
  {
    if (freq[arr[i]] != 1)
    {
      int currlen = i - l;
      if (currlen > maxlen)
      {
        maxlen = currlen;
        best.first = l + 1;
        best.second = i;
      }
      l = i + 1;
    }
  }
 
  int currlen = n - l;
  if (currlen > maxlen)
  {
    maxlen = currlen;
    best.first = l + 1;
    best.second = n;
  }
 
  if (maxlen > 0) cout << best.first << " " << best.second;
  else cout << 0;
  
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
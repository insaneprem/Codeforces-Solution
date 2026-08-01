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
 
    vector<int> dig(10, 0);
    for (auto &i : str)
    {
        if (i == '1' || i == '0')
            continue;
        else if (i == '4')
            dig[2] += 2, dig[3]++;
        else if (i == '6')
            dig[3]++, dig[5]++;
        else if (i == '8')
            dig[2] += 3, dig[7]++;
        else if (i == '9')
            dig[7]++, dig[3] += 2, dig[2]++;
        else
            dig[i - '0']++;
    }
    
  
 
    string ans = "";
    for (int i = 9; i >= 2; i--)
    {
      // cout<<i<<"->"<<dig[i]<<"
";
        ans += string(dig[i], i + '0');
    }
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
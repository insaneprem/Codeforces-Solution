#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    int n = str.size();
 
    int cnt = count(begin(str), end(str), '1');
    string ans = string(cnt, '1');
 
    for (auto i : str)
    {
        if (i != '1')
        {
            ans += i;
        }
    }
    
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == '2')
        {
            flag = 0;
            sort(begin(ans), begin(ans) + i);
            break;
        }
    }
    
    if(flag) sort(begin(ans),end(ans));
 
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
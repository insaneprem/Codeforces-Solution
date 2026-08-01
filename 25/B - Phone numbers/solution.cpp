#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin>>n;
    string str;
    cin >> str;
    
    
    bool iseven = (str.size() % 2 == 0);
    string ans = (iseven) ? str.substr(0, 2) : str.substr(0, 3);
    ans += '-';
 
    for (int i = (iseven ? 2 : 3); i < n; i += 2)
    {
        ans += str.substr(i, 2);
        ans += '-';
    }
    ans.pop_back();
 
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
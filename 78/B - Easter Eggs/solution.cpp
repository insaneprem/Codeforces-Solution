#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    string str = "VIBGYOR";
 
    int fullbatch = n / 7;
    int rem = n % 7;
 
    string ans = "";
    for (int i = 0; i < fullbatch; i++)
        ans += str;
 
    while (rem--)
    {
        ans += ans[ans.size() - 4];
    }
 
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
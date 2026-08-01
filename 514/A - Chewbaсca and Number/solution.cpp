#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    string ans = "";
    for (auto i : str)
    {
        if ((9 - (i - '0')) < (i - '0'))
            ans += (9 - (i - '0')) + '0';
        else
            ans += i;
    }
 
    if (ans[0] == '0')
        ans[0] = '9';
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, d;
    cin >> n >> d;
 
    string str;
    cin >> str;
 
    int ans = 1;
 
    int l = 0, r = 0;
    int distcnt = 0;
 
    while (r < n)
    {
        if (str[r] == 'b')
            distcnt++;
        while (distcnt > d)
        {
            if (str[l] == 'b')
                distcnt--;
            l++;
        }
 
        ans = max(ans, r - l + 1);
        r++;
    }
 
    l = 0, r = 0;
    distcnt = 0;
 
    while (r < n)
    {
        if (str[r] == 'a')
            distcnt++;
        while (distcnt > d)
        {
            if (str[l] == 'a')
                distcnt--;
            l++;
        }
 
        ans = max(ans, r - l + 1);
        r++;
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
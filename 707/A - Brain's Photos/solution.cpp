#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string ans[2] = {"#Color", "#Black&White"};
 
    int n, m;
    cin >> n >> m;
 
    bool flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char ch;
            cin >> ch;
 
            if (ch == 'C' || ch == 'M' || ch == 'Y')
                flag = 0;
        }
    }
 
    cout << ans[flag];
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
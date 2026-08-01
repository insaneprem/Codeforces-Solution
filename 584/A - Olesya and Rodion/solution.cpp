#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, t;
    cin >> n >> t;
 
    if (t == 10 && n == 1)
    {
        cout << -1;
        return;
    }
 
    cout << t;
    int i = (t < 10) ? 1 : 2;
 
    for (i; i < n; i++)
        cout << 0;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int xr = 0, xy = 0;
 
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        xr ^= x;
        xy ^= (x + y);
    }
 
    cout << xr << " " << xy - xr;
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
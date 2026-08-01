#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, x;
    cin >> n >> x;
    int ans, sbits = __builtin_popcount(x);
 
    if (x == 0)
    {
        ans = (n == 1 ? -1 : (n % 2 == 0 ? n : n + 3));
    }
    else if (n == 1)
    {
        ans = x;
    }
    else if (n == 2)
    {
        ans = (sbits >= 2 ? x : (x == 1 ? 5 : x + 2));
    }
    else
    {
        ans = (n <= sbits ? x : x + (n - sbits) + ((n - sbits) % 2 == 0 ? 0 : (x == 1 ? 3 : 1)));
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
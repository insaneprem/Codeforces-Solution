#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 1e9 + 7;
void solve()
{
    int x, y, n;
    cin >> x >> y >> n;
 
    x = (x % mod + mod) % mod;
    y = (y % mod + mod) % mod;
    vector<int> seq = {x, y, (y - x + mod) % mod, (mod - x) % mod, (mod - y) % mod, (x - y + mod) % mod};
    cout << seq[(n - 1) % 6];
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
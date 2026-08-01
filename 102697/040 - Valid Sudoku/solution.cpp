#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 1e9 + 7;
int mod_mul(int a, int b, int mod)
{
    return (a % mod * b % mod) % mod;
}
int mod_exp(int a, int b, int mod)
{
    if (b == 0)
        return 1;
    int res = mod_exp(a, b / 2, mod);
    res = mod_mul(res, res, mod);
 
    if (b % 2 == 1)
        res = mod_mul(res, a, mod);
 
    return res;
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int total = 2 * (m + n) - 8, oddcnt = 0,oddsum = 0;
 
    for (int i = 0; i < k; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
 
        if ((x == 1 || x == n || y == 1 || y == m) && !((x == 1 || x == n) && (y == 1 || y == m)))
        {
            oddcnt++;
            oddsum ^= c;
        }
    }
 
    int val1 = total - oddcnt;
    int val2 = n * m - total - (k - oddcnt);
 
    cout << (val1 ? mod_exp(2, val1 + val2 - 1, mod) : (oddsum ? 0 : mod_exp(2, val2, mod))) % mod;
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
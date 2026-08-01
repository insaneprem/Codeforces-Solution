#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1e9 + 7;
 
int modexp(int base, int exp)
{
    base %= MOD;
    int ans = 1;
 
    while (exp)
    {
        if (exp & 1)
            ans = (ans * base) % MOD;
        base = (base * base) % MOD;
        exp >>= 1;
    }
 
    return ans;
}
void solve()
{
    int n;
    cin >> n;
 
    cout << (modexp(3, n * 3) % MOD - modexp(7, n) % MOD + MOD) % MOD;
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
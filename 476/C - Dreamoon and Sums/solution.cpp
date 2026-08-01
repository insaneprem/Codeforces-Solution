#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1e9 + 7;
void solve()
{
    int a, b;
    cin >> a >> b;
 
    if (b == 1)
    {
        cout << 0;
        return;
    }
 
    cout << (((b * (b - 1) % MOD) * 500000004 % MOD) * ((b * a % MOD * (a + 1) % MOD * 500000004 % MOD + a % MOD) % MOD)) % MOD;
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
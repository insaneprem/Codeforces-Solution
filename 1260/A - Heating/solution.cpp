#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int c, sum;
    cin >> c >> sum;
 
    int q = sum / c;
    int r = sum % c;
 
    cout << (q * q) * (c - r) + (r * (q + 1) * (q + 1));
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
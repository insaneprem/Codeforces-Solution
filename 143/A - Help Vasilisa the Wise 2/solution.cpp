#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
 
    int val = d1 - c2 + r1;
 
    int a = val / 2;
    int b = r1 - a;
    int c = c1 - a;
    int d = d1 - a;
 
    if ((a + b != r1) || (a + c != c1) || (b + d != c2) || (c + d != r2) || (a + d != d1) || (b + c != d2) || (a == b) || (a == c) || (a == d) || (b == c) || (b == d) || (c == d) || (a > 9) || (b > 9) || (c > 9) || (d > 9) || (a < 1) || (b < 1) || (c < 1) || (d < 1))
    {
        cout << -1;
        return;
    }
 
    cout << a << " " << b << "
";
    cout << c << " " << d << "
";
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
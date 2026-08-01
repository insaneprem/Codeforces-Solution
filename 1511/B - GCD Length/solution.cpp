#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
 
    string stra = string(a, '0');
    string strb = string(b, '0');
 
    stra[0] = '1';
    strb[0] = '1';
 
    strb[max(0LL, b - 1 - (c - 1))] = '1';
 
    cout << stra << " " << strb;
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
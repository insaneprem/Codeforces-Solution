#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string a, b;
    cin >> a >> b;
 
    if (a == b)
        cout << -1;
    else
        cout << max((int)a.size(), (int)b.size());
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
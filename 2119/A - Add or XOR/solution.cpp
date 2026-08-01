#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int a, b, x, y;
    cin >> a >> b >> x >> y;
 
    if (b >= a)
    {
        int evencnt = (a % 2 == 0) ? ((b - a) + 1) / 2 : (b - a) / 2;
        int cost = evencnt * min(x, y) + ((b - a) - evencnt) * x;
        cout << cost;
    }
    else
    {
        cout << ((a % 2 == 1 && b == a - 1) ? y : -1);
    }
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
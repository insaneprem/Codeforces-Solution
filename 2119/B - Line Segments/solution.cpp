#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, px, py, qx, qy;
    cin >> n >> px >> py >> qx >> qy;
 
    int dx = qx - px, dy = qy - py;
 
    int sum = 0, maxa = 0;
    for (int i = 0, a; i < n; ++i)
    {
        cin >> a;
        sum += a;
        maxa = max(maxa, a);
    }
 
    int dmin = max(0LL, 2 * maxa - sum);
    cout << (((dx * dx + dy * dy) >= dmin * dmin && (dx * dx + dy * dy) <= sum * sum) ? "YES" : "NO");
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
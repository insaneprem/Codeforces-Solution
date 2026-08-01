#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, x;
    cin >> n >> x;
 
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ans += val;
    }
 
    if (ans == n * x)
        cout << "YES";
    else
        cout << "No";
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
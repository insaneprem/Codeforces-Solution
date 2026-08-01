#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    if (n <= 2)
    {
        cout << -1;
        return;
    }
 
    int x, y;
    if (n % 2 == 0)
    {
        x = (2 + ((n * n) / 2)) / 2;
        y = (((n * n) / 2) - 2) / 2;
    }
    else
    {
        x = (1 + (n * n)) / 2;
        y = ((n * n) - 1) / 2;
    }
 
    cout << x << " " << y;
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
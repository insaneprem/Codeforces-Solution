#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, x;
    cin >> n >> x;
 
    if (x == n)
    {
        for (int i = 0; i < n; i++)
            cout << i << " ";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (i != x)
                cout << i << " ";
        }
        cout << x;
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
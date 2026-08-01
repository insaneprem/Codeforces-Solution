#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int l, r;
    cin >> l >> r;
 
    if (l % 2 == 1)
    {
        if (r - l <= 2)
        {
            cout << -1;
            return;
        }
        cout << l + 1 << " " << l + 2 << " " << l + 3;
    }
    else
    {
        if (r - l <= 1)
        {
            cout << -1;
            return;
        }
        cout << l << " " << l + 1 << " " << l + 2;
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
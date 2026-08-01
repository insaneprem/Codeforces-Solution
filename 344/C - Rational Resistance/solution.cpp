#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int a, b;
    cin >> a >> b;
 
    int ans = 0;
    while (a != 1 || b != 1)
    {
        if (a > b)
        {
            ans += a / b;
            a %= b;
 
            if (a == 0)
            {
                ans--;
                break;
            }
        }
        else
        {
            ans += b / a;
            b %= a;
 
            if (b == 0)
            {
                ans--;
                break;
            }
        }
    }
 
    cout << ans + 1;
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
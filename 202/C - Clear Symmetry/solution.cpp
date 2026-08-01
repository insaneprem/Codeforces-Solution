#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int x;
    cin >> x;
    if (x == 3)
    {
        cout << 5;
        return;
    }
 
    for (int i = 1;; i += 2)
    {
        if ((i * i + 1) / 2 >= x)
        {
            cout << i;
            return;
        }
    }
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "right", stdin);
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
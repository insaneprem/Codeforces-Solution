#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int k, r;
    cin >> k >> r;
 
    for (int i = 1;; i++)
    {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r)
        {
            cout << i;
            break;
        }
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
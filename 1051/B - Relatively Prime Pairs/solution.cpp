#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int l, r;
    cin >> l >> r;
    
    cout<<"YES
";
    for (int i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << "
";
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
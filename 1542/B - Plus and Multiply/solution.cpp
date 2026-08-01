#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
 
    int val = 1;
 
    if (a == 1)
    {
        if((n-1) % b == 0) cout<<"Yes";
        else cout<<"No";
        return;
    }
 
    while (val <= n)
    {
        if ((n - val) % b == 0)
        {
            cout << "Yes";
            return;
        }
        val = val * a;
    }
 
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
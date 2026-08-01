#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    if (n == 0)
    {
        cout << 1;
        return;
    }
 
    if (n % 4 == 0)
        cout << 6;
    else if (n % 4 == 1)
        cout << 8;
    else if (n % 4 == 2)
        cout << 4;
    else
        cout << 2;
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
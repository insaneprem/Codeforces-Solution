#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    if (n % 2 == 0)
    {
        cout << -1;
        return;
    }
 
    for (int i = 0; i < n; i++)
        cout << i << " ";
    cout << "
";
    for (int i = 0; i < n; i++)
        cout << i << " ";
    cout << "
";
    for (int i = 0; i < n; i++)
        cout << (2 * i) % n << " ";
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
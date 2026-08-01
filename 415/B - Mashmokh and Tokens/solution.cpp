#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
 
    for (int i = 0; i < n; i++)
    {
        int token;
        cin >> token;
 
        int money = (token * a) / b;
        int minw = (money * b + a - 1) / a;
        cout << token - minw << " ";
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
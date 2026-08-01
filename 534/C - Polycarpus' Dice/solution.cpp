#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, A;
    cin >> n >> A;
 
    int totalsum = 0;
 
    vector<int> d(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
        totalsum += d[i];
    }
 
    for (int i = 0; i < n; i++)
    {
        int othersum = totalsum - d[i];
        int minsum = n - 1;
 
        int lower = max(1LL, A - othersum);
        int upper = min(d[i], A - minsum);
 
        int possible = 0;
        if (lower <= upper)
        {
            possible = upper - lower + 1;
        }
 
        int impossible = d[i] - possible;
 
        cout << impossible << " ";
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
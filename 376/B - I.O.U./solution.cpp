#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> credit(n + 1, 0), debit(n + 1, 0);
 
    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
 
        debit[a] += c;
        credit[b] += c;
    }
 
    int ans = 0;
 
    for (int i = 1; i <= n; i++)
    {
        ans += max(0LL, credit[i] - debit[i]);
    }
 
    cout << ans;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> parent(n + 1);
 
    for (int i = 1; i <= n; i++)
        cin >> parent[i];
 
    int ans = 1;
 
    for (int i = 1; i <= n; i++)
    {
        int currlen = 1;
        int currnode = i;
        while (parent[currnode] != -1)
        {
            currlen++;
            currnode = parent[currnode];
        }
        ans = max(ans, currlen);
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
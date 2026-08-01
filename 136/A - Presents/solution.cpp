#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int arr[n + 1];
 
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    int ans[n + 1];
 
    for (int i = 1; i <= n; i++)
        ans[arr[i]] = i;
 
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
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
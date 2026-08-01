#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> arr(n + 1, -1);
 
    int mex = 1e9;
    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;
        mex = min(mex, r - l + 1);
        arr[l] = 0;
    }
 
    arr[0] = 0;
 
    for (int i = 1; i <= n; i++)
    {
        arr[i] = i % mex;
    }
 
    cout << mex << "
";
    for (int i = 1; i <= n; i++)
        cout << arr[i] << " ";
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
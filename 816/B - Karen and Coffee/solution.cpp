#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k, q;
    cin >> n >> k >> q;
 
    vector<int> arr(200007, 0);
    vector<int> ans(200007, 0);
 
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
 
        arr[l]++;
        arr[r + 1]--;
    }
 
    for (int i = 1; i <= 200006; i++)
    {
        arr[i] += arr[i - 1];
        if (arr[i] >= k)
            ans[i] = 1;
    }
    for (int i = 1; i <= 200006; i++)
    {
        ans[i] += ans[i - 1];
    }
 
    while (q--)
    {
        int l, r;
        cin >> l >> r;
 
        cout << ans[r] - ans[l - 1] << "
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
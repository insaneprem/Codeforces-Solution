#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, l, r, x;
    cin >> n >> l >> r >> x;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int ans = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        if (__builtin_popcount(i) < 2)
            continue;
        int sum = 0, mini = 1e9, maxi = -1e9;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += arr[j];
                mini = min(mini, arr[j]);
                maxi = max(maxi, arr[j]);
            }
        }
        
        if ((sum >= l && sum <= r) && (maxi-mini) >=x)
            ans++;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, m, val;
    cin >> n >> m;
    vector<int> arr(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        cin >> val;
        arr[val]++;
    }
 
    vector<int> suffix(n + 1, 0);
    suffix[n] = arr[n];
    for (int i = n - 1; i >= 1; i--)  suffix[i] = suffix[i + 1] + arr[i];
    
    int ans = 0;
    for (int k = 1; k < n; k++) ans += suffix[k] * suffix[n - k] - suffix[max(k, n - k)];
 
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
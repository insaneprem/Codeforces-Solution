#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k, x, total = 0;
    cin >> n >> k >> x;
    vector<int> arr(n), prefix(n);
    for (auto &i : arr)
    {
        cin >> i;
        total += i;
    }
 
    prefix[0] = 0;
    for (int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + arr[i - 1];
 
    int ans = 0;
    for (int i = 0; i < k; i++)
    {
        int val = (k - i) * total - x;
        if (val >= 0)
            ans += upper_bound(prefix.begin(), prefix.end(), val) - prefix.begin();
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
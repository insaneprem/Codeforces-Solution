#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    sort(begin(arr), end(arr));
 
    vector<int> prefix = arr;
    partial_sum(begin(prefix), end(prefix), begin(prefix));
 
    int maxfreq = 1;
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        int l = 0, r = i;
 
        while (l <= r)
        {
            int mid = (l + r) / 2;
 
            int val = (mid * arr[i] - (prefix[i - 1] - ((i - mid - 1 >= 0) ? prefix[i - mid - 1] : 0)));
 
            (val <= k) ? l = mid + 1 : r = mid - 1;
        }
 
        if (maxfreq < r + 1)
        {
            ans = arr[i];
            maxfreq = r + 1;
        }
    }
 
    cout << maxfreq << " " << ans;
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
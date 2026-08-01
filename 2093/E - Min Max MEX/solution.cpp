#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(const vector<int> &arr, int k, int mid)
{
    int segments = 0, found = 0;
    vector<bool> seen(mid, false);
 
    for (auto val : arr)
    {
 
        if (val < mid && !seen[val])
        {
            seen[val] = true;
            found++;
        }
 
        if (found == mid)
        {
            segments++;
            found = 0;
            fill(begin(seen), end(seen), false);
        }
    }
 
    return segments >= k;
}
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int l = 0, r = 1e6, ans = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        check(arr, k, m) ? ans = m, l = m + 1 : r = m - 1;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve() {
    int n, d;
    cin >> n >> d;
 
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    int ans = 0;
    int r = 0;
 
    for (int l = 0; l < n; l++) {
        while (r < n && arr[r] - arr[l] <= d) {
            r++;
        }
        int len = r - l - 1;
        if (len >= 2) {
            ans += (len * (len - 1)) / 2;
        }
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
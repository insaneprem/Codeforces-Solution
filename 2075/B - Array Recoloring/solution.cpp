#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    if (k == 1) {
        int maxi = 0;
        for (int i = 1; i < n - 1; i++) {
            maxi = max(maxi, arr[i]);
        }
        cout << max({arr[0] + arr[n - 1], arr[0] + maxi, arr[n - 1] + maxi});
        return;
    }
 
    sort(arr.begin(), arr.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < k + 1 && i < n; i++) {
        ans += arr[i];
    }
    cout << ans;
}
 
signed main() {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        cout << "
";
    }
    return 0;
}
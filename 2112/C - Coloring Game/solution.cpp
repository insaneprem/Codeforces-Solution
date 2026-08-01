#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    sort(begin(arr),end(arr));
 
    int ans = 0;
    
    for (int k = 2; k < n; k++) {
        int i = 0, j = k - 1;
 
        while (i < j) {
            if (arr[i] + arr[j] + arr[k] > max(arr[n - 1], 2 * arr[k])) {
                ans += (j - i);
                j--;
            } else {
                i++;
            }
        }
    }
 
    cout << ans;
}
 
signed main(){
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
}
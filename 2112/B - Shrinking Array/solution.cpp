#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    for (int i = 0; i + 1 < n; i++){
        if (abs(arr[i] - arr[i+1]) <= 1) {
            cout << 0;
            return;
        }
    }
 
    for (int i = 0; i < n - 1; i++) {
 
        int l = min(arr[i], arr[i+1]), r = max(arr[i], arr[i+1]);
 
        if ((i > 0 && r >= arr[i-1]-1 && l <= arr[i-1]+1) ||
            (i+2 < n && r >= arr[i+2]-1 && l <= arr[i+2]+1)) {
            cout << 1;
            return;
        }
    }
 
    cout << -1;
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
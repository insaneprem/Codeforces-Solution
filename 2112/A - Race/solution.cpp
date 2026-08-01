#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int a, x, y;
    cin >> a >> x >> y;
    int l = max(min(a, 2 * x - a), min(a, 2 * y - a)) + 1;
    int r = min(max(a, 2 * x - a), max(a, 2 * y - a)) - 1;
    cout << (l <= r ? "YES" : "NO");
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
}
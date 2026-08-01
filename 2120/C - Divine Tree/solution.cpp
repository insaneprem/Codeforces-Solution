#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    int r = -1;
    for (int k = 1; k <= n; k++) {
        if ((k + n - 1) <= m && m <= (k * (2 * n - k + 1) / 2)) {
            r = k;
            break;
        }
    }
 
    if (r == -1) {
        cout << -1 << '
';
        return;
    }
 
    int extra = r * (2 * n - r + 1) / 2 - m;
    vector<int> par(n + 1, r);
    par[r] = 0;
 
    for (int i = n; i >= 1 && extra; i--) {
        if (i == r) continue;
        int d = min(i, r), save = min(extra, d - 1);
        if (save > 0) par[i] = d - save, extra -= save;
    }
 
    cout << r << '
';
    for (int i = 1; i <= n; i++){
        if (i != r) cout << par[i] << ' ' << i << '
';
    }
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
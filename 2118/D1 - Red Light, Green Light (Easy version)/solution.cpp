#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
int n, k;
int dp[505][2][505], p[505], d[505];
 
int dfs(int idx, int dir, int t) {
    int &res = dp[idx][dir][t];
    if (res != -1) return res;
 
    res = 0;
 
    int move = dir ? 1 : -1;
    if (t == d[idx]) move *= -1;
 
    if ((move == 1 && idx == n) || (move == -1 && idx == 1)) return res = 1;
    
    return res = dfs(idx + move, move == 1, (t + abs(p[idx + move] - p[idx])) % k);
}
 
void solve() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> p[i];
    for (int i = 1; i <= n; i++) cin >> d[i];
    memset(dp, -1, sizeof(dp));
 
    int q;
    cin >> q;
    while (q--) {
        int a;
        cin >> a;
 
        auto it = lower_bound(p + 1, p + n + 1, a);
        if (it == p + n + 1) {
            cout << "YES
"; 
            continue;
        }
        
        cout << (dfs(it - p, 1, (max(0LL, p[it - p] - a)) % k) ? "YES" : "NO") << "
";
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
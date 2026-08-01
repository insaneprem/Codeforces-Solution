#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
vector<vector<pair<int, int>>> adj;
vector<int> b;
 
bool check(int mid, int n) {
    vector<int> arr(n + 1, -1);
    arr[1] = b[1];
 
    for (int v = 1; v <= n; v++) {
        if (arr[v] < 0) continue;
        for (auto [u, w] : adj[v]) {
            if (w <= mid && arr[v] >= w) arr[u] = max(arr[u], arr[v] + b[u]);
        }
    }
 
    return arr[n] >= 0;
}
 
void solve() {
    int n, m, maxw = 0;
    cin >> n >> m;
    b.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) cin >> b[i];
 
    adj.assign(n + 1, {});
 
    while (m--) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back({v, w});
        maxw = max(maxw, w);
    }
 
    if (!check(maxw, n)) {
        cout << -1;
        return;
    }
 
    int l = 0, r = maxw;
    while (l < r) {
        int mid = (l + r) / 2;
        if (check(mid, n)) r = mid;
        else l = mid + 1;
    }
 
    cout << l;
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
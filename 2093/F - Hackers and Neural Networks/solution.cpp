#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<string> arr(n);
    for (auto &s : arr) cin >> s;
 
    vector<vector<string>> network(m, vector<string>(n));
    for (auto &s : network)
        for (auto &j : s) cin >> j;
 
 
    bool canmake = true;
    for (int j = 0; j < n && canmake; j++) {
        bool flag = false;
        for (int i = 0; i < m && !flag; i++){
           if (network[i][j] == arr[j]){
              flag = true;
              break;
           } 
        } 
        if (!flag) canmake = false;
    }
 
    if (!canmake) {
        cout << "-1";
        return;
    }
 
    int val = 0;
    for (auto &s : network) {
        int match = 0;
        for (int j = 0; j < n; j++)
            match += (s[j] == arr[j]);
 
        val = max(val, match);
    }
 
    cout << (3 * n - 2 * val);
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
    while(t--) {
        solve();
        cout << "
";
    }
}
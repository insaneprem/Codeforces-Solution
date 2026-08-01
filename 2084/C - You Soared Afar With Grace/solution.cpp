#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
typedef pair<int,int> P;
void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    map<P, int> freq;
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    int val = -1;
 
    for (int i = 0; i < n; i++) {
        int x = a[i], y = b[i];
        if (x > y) swap(x, y);
        freq[{x, y}]++;
    }
 
    int oddcnt = 0;
    for (auto [p, cnt] : freq) if ((p.first == p.second) && (cnt % 2 == 1)) oddcnt++;
    
    if ((n % 2 == 0 && oddcnt > 0) || (n % 2 == 1 && oddcnt > 1)) {
        cout << -1;
        return;
    }
 
    
    map<P, vector<int>> mpp;
    for (int i = 0; i < n; i++) {
        P p = {a[i], b[i]};
        if (p.first > p.second) swap(p.first, p.second);
        mpp[p].push_back(i);
    }
 
    vector<int> target(n);
    int l = 0, r = n - 1;
    for (auto [p, vec] : mpp) {
        while (vec.size() >= 2) {
            int i = vec.back(); vec.pop_back();
            int j = vec.back(); vec.pop_back();
            target[l++] = i;
            target[r--] = j;
        }
        if (!vec.empty()) {
            if (n % 2 == 0 || val != -1) {
                cout << -1;
                return;
            }
            val = vec.back();
        }
    }
    if (n % 2 == 1) target[n / 2] = val;
 
    vector<int> cur(n), pos(n);
    iota(cur.begin(), cur.end(), 0);
    for (int i = 0; i < n; i++) pos[cur[i]] = i;
 
    vector<P> ans;
    for (int i = 0; i < n; i++) {
        if (cur[i] != target[i]) {
            int j = pos[target[i]];
            ans.push_back({i + 1, j + 1});
            swap(cur[i], cur[j]);
            pos[cur[i]] = i;
            pos[cur[j]] = j;
        }
    }
 
    cout << ans.size() << '
';
    for (auto [i, j] : ans) cout << i << " " << j << '
';
}
 
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t--) {
        solve();
        cout<<"
";
    }
}
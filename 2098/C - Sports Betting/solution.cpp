#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n;
    cin >> n;
    vector<int> days(n);
    for (auto &i : days) cin >> i;
    sort(days.begin(), days.end());
 
    vector<pair<int, int>> vec;
    for (int i = 0; i < n;) {
        int j = i;
        while (j < n && days[j] == days[i]) j++;
        vec.push_back({days[i], j - i});
        i = j;
    }
 
    bool flag = false;
 
    for (auto &[day, freq] : vec) {
        if (freq >= 4) {
            flag = true;
            break;
        }
    }
    
    for (int i = 0; i + 1 < vec.size() && !flag; i++) {
        if (vec[i].second < 2) continue;
 
        for (int j = i + 1; j < vec.size() && vec[j].first == vec[j-1].first + 1; j++) {
            if (vec[j].second >= 2) {
                flag = true;
                break;
            }
        }
    }
 
    cout << (flag ? "YES" : "NO");
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
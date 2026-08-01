#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    string str;
    cin >> str;
 
    int val = 0, zeros = 0;
    for (auto ch : str) {
        val += (ch == '(' ? 1 : -1);
        if (val == 0) zeros++;
    }
    
    cout << (zeros >= 2 ? "YES" : "NO");
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
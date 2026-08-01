#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
 
    int mini = min({a, b, c});
 
    int val = (a + b + c);
 
    if (val % 9 != 0 || mini < val / 9) {
        cout << "NO";
    } else
        cout << "YES";
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
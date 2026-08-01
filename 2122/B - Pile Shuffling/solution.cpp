#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n;
    cin >> n;
 
    int op = 0, val = 0;
 
    while (n--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
 
        if (a > c) op += a - c;
 
        if (b > d) {
            op += b - d;
            val += min(a, c);
        }
    }
 
    cout << op + val;
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
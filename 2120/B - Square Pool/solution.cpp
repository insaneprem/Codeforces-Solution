#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n, s;
    cin >> n >> s;
    int ans = 0;
    while (n--) {
        int dx, dy, x, y;
        cin >> dx >> dy >> x >> y;
        
        if ((((x * -dx) % s + s) % s) == (((y * -dy) % s + s) % s)) ans++;
    }
    cout << ans;
}
 
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t=1;
    cin >> t;
    while(t--) {
        solve();
        cout << "
";
    }
}
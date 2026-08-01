#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve(){
    int n, m, p, q;
    cin >> n >> m >> p >> q;
 
    if (n % p != 0 || m == (n / p) * q) {
        cout << "YES";
    } else {
        cout << "NO";
    }
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
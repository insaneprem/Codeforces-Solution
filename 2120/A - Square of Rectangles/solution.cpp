#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
 
    int area = l1 * b1 + l2 * b2 + l3 * b3;
    int sq = sqrt(area);
    if (sq * sq != area) {
        cout << "NO";
        return;
    }
 
    if (
        (l1 == sq && l2 == sq && l3 == sq && b1 + b2 + b3 == sq) ||
        (b1 == sq && b2 == sq && b3 == sq && l1 + l2 + l3 == sq) || 
        (l1 == sq && b2 == b3 && b1 + b2 == sq && l2 + l3 == sq) || 
        (b1 == sq && l2 == l3 && l1 + l2 == sq && b2 + b3 == sq)  
    ) {
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
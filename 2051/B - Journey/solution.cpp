#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n, a, b, c;
    cin >> n >> a >> b >> c;
 
    int val = a + b + c;
    int ans = (n / val) * 3;
    int rem = n % val;
 
    if (rem == 0) {
        cout << ans;
    } else if (rem <= a) {
        cout << ans + 1;
    } else if (rem <= a + b) {
        cout << ans + 2;
    } else {
        cout << ans + 3;
    }
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
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
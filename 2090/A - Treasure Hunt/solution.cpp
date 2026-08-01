#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve() {
    int x, y, a;
    cin >> x >> y >> a;
    
    int val=(a+0.5)/(x+y);
 
    if(val*(x+y) + x >= a+0.5) cout<<"NO";
    else cout<<"YES";
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
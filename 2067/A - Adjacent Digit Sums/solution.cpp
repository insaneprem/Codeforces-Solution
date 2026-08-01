#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int x,y;
    cin>>x>>y;
 
    if((x+1-y)>=0 && (x-y+1)%9 == 0) cout<<"YES";
    else cout<<"No";
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
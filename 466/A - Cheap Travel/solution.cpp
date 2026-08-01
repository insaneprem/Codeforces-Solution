#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
 
    int passday=n-(n%m);
    int rem=n%m;
    
    int ans=(passday/m)*b + min(rem*a,b);
    
    cout<<min(n*a,ans);
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t=1;
    // cin>>t;
    while(t--) {
        solve();
        cout<<"
";
    }
}
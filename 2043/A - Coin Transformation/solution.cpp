#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n;
   cin>>n;
 
   if(n<=3) cout<<1;
   else{
    int ans=1;
    while(n>3) ans*=2,n/=4;
    cout<<ans;
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
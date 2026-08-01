#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
const int mod=1e18+7;
int mod_mul(int a,int b,int m=mod){
    return (a % m * b %m ) %m;
}
int mod_exp(int a,int b,int m=mod){
    if(b == 0) return 1;
    int res=mod_exp(a,b/2,m);
    res=mod_mul(res,res,m);
    
    if(b%2 == 1) res=mod_mul(res,a,m);
 
    return res;
}
void solve(){
   int n;
   cin>>n;
 
   int val=2*(1-mod_exp(2,n))*(-1);
   cout<<val;
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
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
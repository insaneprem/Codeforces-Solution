#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n,k;
   cin>>n>>k;
   
   vector<int> ans(n,0);
   int cnt=1;
   for(int i=k-1;i<n;i+=k){
       ans[i]=cnt++;
   }
 
   for(int i=0;i<n;i++){
    if(ans[i] == 0) ans[i]=cnt++;
   }
 
   for(auto i:ans) cout<<i<<" ";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n;
   cin>>n;
 
   vector<int> m(n),s(n);
 
   for(auto &i:m) cin>>i;
   for(auto &i:s) cin>>i;
 
   vector<int> ans=m;
 
   for(int i=0;i<n-1;i++) ans[i]=m[i]-s[i+1];
 
   int res=0;
   for(auto i:ans) if(i>0) res+=i;
 
   cout<<res;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n,m,k;
   cin>>n>>m>>k;
 
   vector<int> missing(m);
   for(auto &i:missing) cin>>i;
 
   set<int> known,total,unknown;
   for(int i=0;i<k;i++){
     int val; cin>>val;
     known.insert(val);
   }
 
   for(int i=1;i<=n;i++){
     if(known.find(i) == known.end()) unknown.insert(i); 
   }
   
   for(int i=1;i<=n;i++) total.insert(i);
 
   string ans;
 
   for(auto i:missing){
      if(k == n) ans+='1';
      else if(k == n-1){
         int q=*unknown.begin();
         if(q == i) ans+='1';
         else ans+='0';
      }
      else ans+='0';
 
   }
   
   cout<<ans;
 
 
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
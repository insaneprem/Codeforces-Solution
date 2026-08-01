#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n;
   cin>>n;
 
   int cnt=0;
 
   while(n>=1){
     while(n%2 == 0) n=n/2;
     n--;
     cnt++;
   }
    
   cout<<cnt;
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
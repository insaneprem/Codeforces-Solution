#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   string str;
   cin>>str;
   
   int n=str.size();
   int i=0;
   for(i;i<n;i++){
       if(str[i] == '0') break;
   }
 
   cout<<1<<" "<<n<<" ";
   if(i == n){
     cout<<n<<" "<<n;
   }
   else{
      int j=i;
      while(str[j] == '0') j++;
      int zero=j-i;
 
      cout<<max(1LL,i+1-zero)<<" "<<max(1LL,i+1-zero)+(n-i)-1;
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
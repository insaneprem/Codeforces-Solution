#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
bool check(string str,int n){
  
  for(int i=0;i<n;i++){
    if(str[i] == str[n-i-1]) continue;
    
    if(str[i] < str[n-i-1]) return 1;
    else return 0;
  }
  return 0;
}
void solve(){
    int n,k;
    cin>>n>>k;
    
    string str;
    cin>>str;
    
    if(k>1){
      int maxi=max_element(begin(str),end(str)) - begin(str);
      
      swap(str[n-1],str[maxi]);
      int mini=min_element(begin(str),end(str)) - begin(str);
      swap(str[0],str[mini]);
      
      if(check(str,n)) cout<<"Yes";
      else cout<<"No";
    }
    else if(k == 1){
      string str1=str,str2=str;
      int maxi=max_element(begin(str1),end(str1)) - begin(str1);
      
      swap(str1[n-1],str1[maxi]);
      int mini=min_element(begin(str2),end(str2)) - begin(str2);
      swap(str2[0],str2[mini]);
      
      if(check(str1,n) || check(str2,n)) cout<<"Yes";
      else cout<<"No";
    }
    else{
      if(check(str,n)) cout<<"Yes";
      else cout<<"No";
    }
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
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){ 
  
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  
  int cnt=1;
  int num=a+b;
  if(num+c == d) cnt++;
  if(b+num == c) cnt++;
  
  int ans=cnt;
  cnt=1;
  
  num=d-c;
  if(a+b == num) cnt++;
  if(b+num == c) cnt++;
  
  
  
  
  cout<<max(cnt,ans);
 
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
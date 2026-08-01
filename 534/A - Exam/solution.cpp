#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n;
   cin>>n;
   
   vector<int> arr;
   for(int i=2;i<=n;i+=2) arr.emplace_back(i);
   if(!arr.empty() && arr.back() == 2) arr.pop_back();
   for(int i=1;i<=n;i+=2) arr.emplace_back(i);
   
   cout<<arr.size()<<"
";
   for(auto i:arr) cout<<i<<" ";
 
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
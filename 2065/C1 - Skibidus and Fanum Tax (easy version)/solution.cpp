#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n,m;
    cin>>n>>m;
    
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    
    int val;
    cin>>val;
    
    arr[0]=min(arr[0],val-arr[0]);
    
    bool flag=1;
    for(int i=1;i<n;i++){
      int upval=val-arr[i];
      
      if(arr[i]>=arr[i-1]){
        if(upval<=arr[i] && upval>=arr[i-1]) arr[i]=upval;
      }
      else{
        if(upval>=arr[i-1]) arr[i]=upval;
        else{
          flag=0;
          break;
        }
      }
    }
    // for(auto i:arr) cout<<i<<" ";
    
    if(flag) cout<<"YES";
    else cout<<"NO";
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
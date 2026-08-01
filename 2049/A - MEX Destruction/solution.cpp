#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n;
    cin>>n;
 
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
 
    int cnt=count(arr.begin(),arr.end(),0);
 
    if(cnt == n){
        cout<<0;
    }
    else{
        int l=0,r=n-1;
        while(l<n && arr[l] == 0) l++;
        while(r>0 && arr[r] == 0) r--;
 
        int cnt=count(arr.begin()+l,arr.begin()+r+1,0);
        if(cnt == 0) cout<<1;
        else cout<<2;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n;
    cin>>n;
 
    bool one = false;
 
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
 
        if(val == 1) one = 1;
    }
 
    cout<<((one) ? -1 : 1);
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
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n;
    cin>>n;
 
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
 
    vector<int> even,odd;
    for(auto i:arr){
        if(i%2 == 0) even.push_back(i);
        else odd.push_back(i);
    }
 
    if(even.size() == 0) cout<<odd.size()-1;
    else cout<<odd.size()+1;
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
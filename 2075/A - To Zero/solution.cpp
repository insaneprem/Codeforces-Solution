#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
   int n, k; 
   cin >> n >> k;
 
    int d = k - 1;
    if(n % 2 == 0){
        cout << (n + d - 1) / d;
    } else {
        if(n == k){ cout << 1; return; }
        int rem = n - k;
        cout << 1 + (rem + d - 1) / d;
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
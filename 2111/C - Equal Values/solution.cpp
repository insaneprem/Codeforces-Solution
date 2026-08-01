#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    int ans = LLONG_MAX;
    for (int i = 0; i < n;) {
        int j = i;
        while (j + 1 < n && arr[j + 1] == arr[i]) j++;
        
        ans = min(ans, arr[i] * (i + (n - 1 - j)));
        i = j + 1;
    }
    cout << ans;
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
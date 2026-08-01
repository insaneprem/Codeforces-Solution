#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve(){
    int n, x, y;
    cin >> n >> x >> y;
 
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    int sum = accumulate(arr.begin(), arr.end(), 0LL);  
    sort(arr.begin(), arr.end());                    
 
    int ans = 0;
 
    for (int i = 0; i < n - 1; i++) {
        int low = (sum - y) - arr[i];
        int high = (sum - x) - arr[i];
 
        auto idx1 = lower_bound(arr.begin() + i + 1, arr.end(), low);
        auto idx2 = upper_bound(arr.begin() + i + 1, arr.end(), high);
 
        ans += (idx2 - idx1);
    }
 
    cout << ans;
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
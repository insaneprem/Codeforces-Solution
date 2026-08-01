#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve(){
    int n;
    string s;
    cin >> n >> s;
 
    int cnt = 0;
    for (auto c : s) {
        if (c == '<') cnt++;
    }
 
    vector<int> res(n);
    int low = cnt, high = cnt;
    res[0] = high;
 
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '<') {
            res[i + 1] = --low;
        } else {
            res[i + 1] = ++high;
        }
    }
 
    
    int min_val = *min_element(res.begin(), res.end());
    for (auto &x : res) x -= (min_val - 1);
 
    for (auto x : res) cout << x << " ";
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
 
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    unordered_map<int, int> freq;
 
    for (int i = 0; i < n; ++i) {
        cin >> x[i];
        freq[x[i]]++;
    }
 
    int score = 0;
 
    for (auto &it : freq) {
        int num=it.first;
        int count=it.second;
        int complement = k - num;
        if (num == complement) {
            score += count / 2; 
        } else if (complement > num) {
            if (freq.find(complement) != freq.end()) {
                score += min(count, freq[complement]);
            }
        }
    }
 
    cout << score ;
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
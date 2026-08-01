#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (auto &i:arr) cin>>i; 
    
    map<int, int> freq;
    for (auto &i:arr) freq[i]++;
    
    vector<pair<int, int>> freqlist;
    for (auto& i : freq) 
        freqlist.push_back(i);
    
    
    sort(freqlist.begin(), freqlist.end(), [](auto& arr, auto& b) {
        return arr.second < b.second; 
    });
    
    int dist = freqlist.size();
    
    for (auto& i : freqlist) {
        int cnt = i.second;
        
        if (cnt <= k) {
            k -= cnt;
            dist--;
        } else {
            break; 
        }
    }
    
    cout << max(1,dist) << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
int n;
vector<int> arr, prefix;
unordered_map<int, int> mpp;
 
int getprefix(int index);
 
int compxr(int left, int right){
    if(left > right) return 0;
    
    if((left/2) == (right/2)){
        return ((right - left + 1) & 1) ? getprefix((left/2)) : 0;
    } else {
        int ans = 0;
        if(2 * (left/2) < left) ans ^= getprefix((left/2));
        if(2 * (right/2) + 1 > right) ans ^= getprefix((right/2));
        return ans;
    }
}
 
int getprefix(int index){
    if(index <= n) return prefix[index];
    if(mpp.count(index)) return mpp[index];
    return mpp[index] = getprefix(n) ^ compxr(n + 1, index);
}
 
void solve(){
    mpp.clear();
    cin >> n;
 
    int left, right;
    cin >> left >> right;
 
    arr.resize(n + 1);
    prefix.resize(n + 1);
 
    
    prefix[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        prefix[i] = prefix[i - 1] ^ arr[i];
    }
    cout << ((left <= n) ? arr[left] : getprefix(left / 2));
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
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
const int mod = 998244353;
const int N = 500000;
vector<int> fact(N+1);
vector<int> modinv(N+1);
 
int power(int base, int x) {
    if(x < 0) return 0;
    int ans = 1;
    while(x) {
        if(x % 2 == 0) {
            base = (base * base) % mod;
            x = x / 2;
        }
        else {
            ans = (ans * base) % mod;
            x--;
        }
    }
    return ans;
}
 
void precomp() {
    fact[0] = 1;
    modinv[0] = 1;
    for(int i = 1; i <= N; i++){
        fact[i] = (fact[i-1] * i) % mod;
        modinv[i] = power(fact[i], mod - 2);
    }
}
 
void solve() {
    vector<int> freq;
    
    int sum = 0, val;
    for (int i = 0; i < 26; i++) {
        cin >> val;
        if (val > 0) freq.push_back(val), sum += val;
    }
    
    int odd = (sum + 1) / 2, m = freq.size();
    vector<int> dp(odd + 1, 0);
    dp[0] = 1;
    for (auto f : freq){
        for (int j = odd; j >= f; j--) 
           dp[j] = (dp[j] + dp[j - f]) % mod;
    }
    
    int prod = 1;
    for (auto f : freq) prod = (prod * modinv[f]) % mod;
    
    cout << (((fact[odd] * fact[sum - odd]) % mod * dp[odd] % mod) * prod % mod);
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
    precomp();
    while(t--) {
        solve();
        cout<<"
";
    }
}
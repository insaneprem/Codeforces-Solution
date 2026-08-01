#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
#define MOD 1000000007
 
int power(int a, int b = MOD - 2) {
    int res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}
 
vector<int> a, b, k, fact, inv;
 
void solve() {
    static int i = 0;
    int A = a[i], B = b[i], K = k[i];
    i++;
    int N = ((A - 1) * K + 1) % MOD, num = 1;
    for (int j = 0; j < A; j++) num = num * ((N - j + MOD) % MOD) % MOD;
    int comb = num * inv[A] % MOD;
    int pairs = K * comb % MOD;
    int M = ((B - 1) * pairs + 1) % MOD;
    cout << N << " " << M;
}
 
signed main() {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t=1;
    cin >> t;
    a.resize(t); b.resize(t); k.resize(t);
    int mx = 0;
    for (int i = 0; i < t; i++) {
        cin >> a[i] >> b[i] >> k[i];
        mx = max(mx, a[i]);
    }
    fact.assign(mx+1, 1);
    inv.assign(mx+1, 1);
    for (int i = 1; i <= mx; i++) fact[i] = fact[i-1]*i % MOD;
    inv[mx] = power(fact[mx]);
    for (int i = mx-1; i >= 0; i--) inv[i] = inv[i+1]*(i+1)%MOD;
 
    for (int i = 0; i < t; i++) {
        solve();
        cout << "
";
    }
}
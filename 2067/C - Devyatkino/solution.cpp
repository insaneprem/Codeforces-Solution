#ifdef insaneprem
#include <header.h>
#else
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,mmx")
#pragma GCC optimize("-ffloat-store")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define dbg(args...) 42;
#define endl "
"
#endif
 
template <class Fun>
class y_combinator_result {
    Fun fun_;
 
public:
    template <class T>
    explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}
    template <class... Args>
    decltype(auto) operator()(Args &&...args) { return fun_(std::ref(*this), std::forward<Args>(args)...); }
};
template <class Fun>
decltype(auto) y_combinator(Fun &&fun) { return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun)); }
 
using namespace std;
using namespace __gnu_pbds;
#define fo(i, n) for (int i = 0; i < (n); ++i)
#define repA(i, j, n) for (int i = (j); i <= (n); ++i)
#define repD(i, j, n) for (int i = (j); i >= (n); --i)
#define all(x) begin(x), end(x)
#define sz(x) ((int)(x).size())
#define eb emplace_back
#define int long long
 
using mytype = long double;
using ii = pair<int, int>;
using vii = vector<ii>;
using vi = vector<int>;
 
template <class T>
using ordered_set = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
// X.find_by_order(k) return kth element. 0 indexed.
// X.order_of_key(k) returns count of elements strictly less than k.
 
const auto start_time = std::chrono::high_resolution_clock::now();
void insaneprem() {
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    cerr << "Time Taken : " << diff.count() << "
";
}
 
#define bcnt(x) __builtin_popcountll(x)
const int MAXPOS = 32;
const int MAXCARRY = 32;
const int MAXM = 115;
 
int dp[MAXPOS][MAXCARRY][MAXM][2];
int dpvis[MAXPOS][MAXCARRY][MAXM][2];
int curr = 1;
 
int glen, gm;
int digitsarr[MAXPOS];
 
int fdp (int pos, int carry, int rem, int found) {
    if(pos == glen) {
        return (rem == 0 && carry == 0 && found == 1) ? 1 : 0;
    }
    if(carry >= MAXCARRY) return 0;
 
    if(dpvis[pos][carry][rem][found] == curr)
        return dp[pos][carry][rem][found];
 
    int ans = 0;
    if(pos == 0) {
        int total = digitsarr[pos] + carry;
        int ndig = total % 10;
        int ncarry = total / 10;
        int nfound = found || (ndig == 7);
        ans = fdp(pos + 1, ncarry, rem, nfound);
    } else {
        for(int c = 0; c <= rem; c++){
            int total = digitsarr[pos] + c + carry;
            int ndig = total % 10;
            int ncarry = total / 10;
            int nfound = found || (ndig == 7);
            if(fdp(pos + 1, ncarry, rem - c, nfound)) {
                ans = 1;
                break;
            }
        }
    }
 
    dpvis[pos][carry][rem][found] = curr;
    dp[pos][carry][rem][found] = ans;
    return ans;
}
 
bool check (int m, int n) {
    gm = m;
    long long start = n - m;
    vector<int> digs;
    if(start == 0)
        digs.push_back(0);
    else {
        while(start) {
            digs.push_back(start % 10);
            start /= 10;
        }
    }
    int sz = digs.size();
    glen = sz + 10;
    for(int i = 0; i < sz; i++){
        digitsarr[i] = digs[i];
    }
    for(int i = sz; i < glen; i++){
        digitsarr[i] = 0;
    }
    curr++;
    return fdp(0, 0, m, 0) == 1;
}
 
int find(int n) {
    int m = 0;
    while(true) {
        m++;
        if(to_string(n + 9 * m).find('7') != string::npos)
            return m;
    }
    return -1;
}
 
void solve(){
    int n;
    cin >> n;
    if(to_string(n).find('7') != string::npos){
        cout << 0;
        return;
    }
    int val = find(n);
    for(int m = 1; m <= val; m++){
        if(check(m, n)){
            cout << m;
            return;
        }
    }
    cout << -1;
}
signed main(void) {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
        cout<<"
";
    }
    insaneprem();
    return 0;
}
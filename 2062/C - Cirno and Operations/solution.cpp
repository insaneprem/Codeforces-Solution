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
 
const auto start_time = std::chrono::high_resolution_clock::now();
void insaneprem() {
    auto end_time = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end_time - start_time;
    cerr << "Time Taken : " << diff.count() << "
";
}
 
#define bcnt(x) __builtin_popcountll(x)
 
const int mod=1e9+7;
const int N=1e5;
 
vector<int> fact(N+1);
vector<int> modinv(N+1);
int power(int base,int x){
    if(x<0) return 0;
 
    int ans=1;
    while(x){
        if(x%2 == 0){
            base=(base*base)%mod;
            x=x/2;
        }
        else{
           ans=(ans*base)%mod;
            x--;
        }
    }
    return ans;
}
void precomp(){
    modinv[0]=1;
    fact[0]=1;
    for(int i=1;i<=N;i++){
         fact[i]=(fact[i-1]*i)%mod;
         modinv[i]=power(fact[i],mod-2);
    }
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for(auto &i:arr) cin >> i;
 
    if (n == 1) {
        cout << arr[0] << "
";
        return;
    }
 
    
    auto apply_diff = [](const vector<int>& v) {
        vector<int> diff;
        for (int i = 1; i < v.size(); i++) {
            diff.push_back(v[i] - v[i-1]);
        }
        return diff;
    };
 
    int max_sum = LLONG_MIN;
    
  
    vector<int> current = arr;
    max_sum = max(max_sum, accumulate(current.begin(), current.end(), 0LL));
 
    
    while (current.size() > 1) {
        
        vector<int> next = apply_diff(current);
        max_sum = max(max_sum, accumulate(next.begin(), next.end(), 0LL));
 
        
        reverse(current.begin(), current.end());
        vector<int> next_reversed = apply_diff(current);
        max_sum = max(max_sum, accumulate(next_reversed.begin(), next_reversed.end(), 0LL));
 
        current = next;
    }
 
    cout << max_sum << "
";
}
 
signed main(void) {
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int T = 1;
    cin >> T;
    precomp();
    while (T--) {
        solve();
    }
    insaneprem();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define ld long double
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "
"
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " -> "; _print(x); cerr << '
';
#else
#define debug(x)
#endif
 
void _print(int t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(const string &t) { cerr << t; }
void _print(ld t) { cerr << t; }
void _print(bool t) { cerr << (t ? "true" : "false"); }
 
template <class T, class V> void _print(const pair<T, V> &p);
template <class T> void _print(const vector<T> &v);
template <class T> void _print(const vector<vector<T>> &v);
template <class T> void _print(const set<T> &v);
template <class T> void _print(const multiset<T> &v);
template <class T, class V> void _print(const map<T, V> &v);
template <typename... Args> void _print(const tuple<Args...> &t);
 
 
template <class T, class V> void _print(const pair<T, V> &p) {cerr << "{"; _print(p.first); cerr << ",";
_print(p.second); cerr << "}";}
template <class T> void _print(const vector<T> &v) {cerr << "[ "; for (const auto &i : v) {_print(i); cerr << " ";}
cerr << "]";}
template <class T> void _print(const vector<vector<T>> &v) {cerr << "[
"; for (const auto &row : v) {cerr << "  [ ";
for (const auto &x : row) {_print(x); cerr << " ";} cerr << "]
";} cerr << "]";}
template <class T> void _print(const set<T> &v) {cerr << "[ "; for (const auto &i : v) { _print(i); cerr << " ";}
cerr << "]";}
template <class T> void _print(const multiset<T> &v) {cerr << "[ "; for (const auto &i : v) { _print(i); cerr << " ";}
cerr << "]";}
template <class T, class V> void _print(const map<T, V> &v) {cerr << "[ "; for (const auto &i : v) { _print(i);
cerr << " "; } cerr << "]";}
template <size_t idx = 0, typename... T> typename enable_if<idx == sizeof...(T)>::type _print_tuple(const tuple<T...> &t) {}
template <size_t idx = 0, typename... T>
typename enable_if<idx < sizeof...(T)>::type
_print_tuple(const tuple<T...> &t) {
    if(idx > 0) cerr << ",";
    _print(get<idx>(t));
    _print_tuple<idx+1>(t);
}
template <typename... Args> void _print(const tuple<Args...> &t) {cerr << "{"; _print_tuple(t); cerr << "}";}
 
// ----------------------------------------------------------------------------------------------------------------->
struct Node
{
    int arr, brr, mini = -1e9, prefix = 0, idx = 0;
};
void solve()
{
    int n, c;
    cin >> n >> c;
 
    vector<Node> v(n + 1);
 
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
 
        v[i].arr = val + i;
        v[i].brr = val + (n + 1 - i);
        v[i].mini = min(v[i].arr, v[i].brr);
        v[i].prefix = 0;
        v[i].idx = i;
    }
 
    sort(begin(v) + 1, end(v), [](auto &a, auto &b)
         { return a.mini < b.mini; });
 
    for (int i = 1; i <= n; i++)
    {
        v[i].prefix = v[i - 1].prefix + v[i].mini;
    }
 
 
 
   int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (c < v[i].arr)
            continue;
        
        int cost = c - v[i].arr;
        int l = 0, r = n, max_taken = 0;
 
        while (l <= r)
        {
            int mid = (l + r) / 2;
            int current_cost = v[mid].prefix;
 
            if (mid >= i) {
                current_cost -= v[i].mini;
            }
 
            if (current_cost <= cost)
            {
                l = mid + 1; 
            }
            else
            {
                r = mid - 1; 
            }
        }
 
        ans = max(ans, r + (r < i));
    }
 
 
    cout << ans;
}
 
signed main() {
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
    
    fastio();
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
        cout << "
";
    }
    return 0;
}
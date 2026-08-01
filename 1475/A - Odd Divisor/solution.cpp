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
void solve()
{
    int n;
    cin >> n;
 
    if (__builtin_popcountll(n) == 1)
        cout << "NO";
    else
        cout << "YES";
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
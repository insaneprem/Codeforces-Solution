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
template<typename Node, typename Update>
struct LazySGT {
    vector<Node> tree;
    vector<bool> lazy;
    vector<Update> updates;
    vector<int> arr; 
    int n;
    int s;
    LazySGT(int a_len, vector<int> &a) { 
        arr = a;
        n = a_len;
        s = 1;
        while(s < 2 * n){
            s = s << 1;
        }
        tree.resize(s); fill(tree.begin(),tree.end(), Node());
        lazy.resize(s); fill(lazy.begin(),lazy.end(), false);
        updates.resize(s); fill(updates.begin(),updates.end(), Update());
        build(0, n - 1, 1);
    }
    void build(int start, int end, int index) { 
        if (start == end)   {
            tree[index] = Node(arr[start]);
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, 2 * index);
        build(mid + 1, end, 2 * index + 1);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    void pushdown(int index, int start, int end){
        if(lazy[index]){
            int mid = (start + end) / 2;
            apply(2 * index, start, mid, updates[index]);
            apply(2 * index + 1, mid + 1, end, updates[index]);
            updates[index] = Update();
            lazy[index] = 0;
        }
    }
    void apply(int index, int start, int end, Update& u){
        if(start != end){
            lazy[index] = 1;
            updates[index].combine(u, start, end);
        }
        u.apply(tree[index], start, end);
    }
    void update(int start, int end, int index, int left, int right, Update& u) {  
        if(start > right || end < left)
            return;
        if(start >= left && end <= right){
            apply(index, start, end, u);
            return;
        }
        pushdown(index, start, end);
        int mid = (start + end) / 2;
        update(start, mid, 2 * index, left, right, u);
        update(mid + 1, end, 2 * index + 1, left, right, u);
        tree[index].merge(tree[2 * index], tree[2 * index + 1]);
    }
    Node query(int start, int end, int index, int left, int right) { 
        if (start > right || end < left)
            return Node();
        if (start >= left && end <= right){
            pushdown(index, start, end);  
            return tree[index];
        }
        pushdown(index, start, end);
        int mid = (start + end) / 2;
        Node l, r, ans;
        l = query(start, mid, 2 * index, left, right);
        r = query(mid + 1, end, 2 * index + 1, left, right);
        ans.merge(l, r);
        return ans; 
    }
    void make_update(int left, int right, int val) {  
        Update new_update = Update(val); 
        update(0, n - 1, 1, left, right, new_update);
    }
    Node make_query(int left, int right) {
        return query(0, n - 1, 1, left, right);
    }
};
 
struct Node1 {
    int val; 
    Node1() { 
        val = 0;    
    }
    Node1(int p1) { 
        val = p1;
    }
    void merge(Node1 &l, Node1 &r) { 
        val = l.val + r.val;  
    }
};
 
struct Update1 {
    int val; 
    Update1(){ 
        val = 0;
    }
    Update1(int val1) { 
        val = val1;
    }
    void apply(Node1 &a, int start, int end) {  
        a.val = val * (end - start + 1); 
    }
    void combine(Update1& new_update, int start, int end){
        val = new_update.val;
    }
};
void solve(){
    int n,q;
    cin>>n>>q;
 
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
 
    LazySGT<Node1,Update1> tree(n,arr);
 
    while(q--){
        int type;
        cin>>type;
 
        if(type == 1){
            int idx,val;
            cin>>idx>>val;
            tree.make_update(idx-1,idx-1,val);
        }
        else{
           int val;
           cin>>val;
           tree.make_update(0,n-1,val);
        }
 
        int ans=tree.make_query(0,n-1).val;
        cout<<ans<<"
";
    }
}
signed main(void) {
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
        cout<<"
";
    }
    insaneprem();
    return 0;
}
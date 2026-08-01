#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
template <typename Node, typename Update>
struct LazySegTree
{
    int n;
    vector<Node> tree;
    vector<Update> lazy;
    vector<bool> hasLazy;
 
    LazySegTree(int _n, vector<int> &arr)
    {
        n = _n;
        tree.resize(4 * n);
        lazy.resize(4 * n);
        hasLazy.assign(4 * n, false);
        build(1, 0, n - 1, arr);
    }
 
    inline void build(int idx, int start, int end, vector<int> &arr)
    {
        if (start == end)
        {
            tree[idx] = Node(arr[start]);
            return;
        }
 
        int mid = (start + end) >> 1;
 
        build(idx << 1, start, mid, arr);
        build(idx << 1 | 1, mid + 1, end, arr);
 
        tree[idx].merge(tree[idx << 1], tree[idx << 1 | 1]);
    }
 
    inline void applyUpdate(int idx, int l, int r, Update &u)
    {
        u.apply(tree[idx]);
        if (l != r)
        {
            if (!hasLazy[idx])
            {
                hasLazy[idx] = true;
                lazy[idx] = u;
            }
            else
                lazy[idx].combine(u);
        }
    }
 
    inline void pushdown(int idx, int start, int end)
    {
        if (hasLazy[idx])
        {
            int mid = (start + end) >> 1;
 
            applyUpdate(idx << 1, start, mid, lazy[idx]);
            applyUpdate((idx << 1 | 1), mid + 1, end, lazy[idx]);
            hasLazy[idx] = false;
            lazy[idx] = Update(false);
        }
    }
 
    inline void update(int idx, int start, int end, int ql, int qr, Update &u)
    {
        if (start > qr || end < ql)
            return;
 
        if (start >= ql && end <= qr)
        {
            applyUpdate(idx, start, end, u);
            return;
        }
 
        pushdown(idx, start, end);
 
        int mid = (start + end) >> 1;
        update(idx << 1, start, mid, ql, qr, u);
        update(idx << 1 | 1, mid + 1, end, ql, qr, u);
 
        tree[idx].merge(tree[idx << 1], tree[idx << 1 | 1]);
    }
 
    inline void query(int idx, int start, int end, int ql, int qr)
    {
        if (start > qr || end < ql)
            return Node();
 
        if (start >= ql && end <= qr)
        {
 
            return tree[idx];
        }
 
        pushdown(idx, start, end);
 
        int mid = (start + end) >> 1;
        Node left = query(idx << 1, start, mid, ql, qr);
        Node right = query(idx << 1 | 1, mid + 1, end, ql, qr);
 
        Node ans;
        ans.merge(left, right);
 
        return ans;
    }
 
    inline Node make_query()
    {
        return tree[1];
    }
 
    inline void make_update(int ql, int qr)
    {
        Update u = Update(true);
        update(1, 0, n - 1, ql, qr, u);
    }
};
 
struct Node
{
    int cnt4, cnt7, lis, lds;
 
    Node()
    {
        cnt4 = 0;
        cnt7 = 0;
        lis = 0;
        lds = 0;
    }
    Node(int val)
    {
        if (val == 4)
        {
            cnt4 = 1;
            cnt7 = 0;
        }
        else
        {
            cnt4 = 0;
            cnt7 = 1;
        }
        lis = 1;
        lds = 1;
    }
 
    inline void merge(const Node &a, const Node &b)
    {
        cnt4 = a.cnt4 + b.cnt4;
        cnt7 = a.cnt7 + b.cnt7;
        lis = max(a.cnt4 + b.lis, a.lis + b.cnt7);
        lds = max(a.cnt7 + b.lds, a.lds + b.cnt4);
    }
};
 
struct Update
{
 
    bool isSwitch;
    Update(bool sw = false)
    {
        isSwitch = sw;
    }
 
    inline void apply(Node &a)
    {
        if (isSwitch)
        {
            swap(a.cnt4, a.cnt7);
            swap(a.lis, a.lds);
        }
    }
 
    inline void combine(Update &other)
    {
        if (other.isSwitch)
            isSwitch = !isSwitch;
    }
};
void solve()
{
    int n, m;
    cin >> n >> m;
 
    string str;
    cin >> str;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = str[i] - '0';
    }
 
    // for(auto i:arr) cout<<i<<" ";
 
    LazySegTree<Node, Update> tree(n, arr);
 
    while (m--)
    {
        string query;
        cin >> query;
 
        if (query == "count")
            cout << tree.make_query().lis << "
";
        else
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
 
            tree.make_update(l, r);
        }
    }
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
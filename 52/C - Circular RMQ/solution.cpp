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
 
    LazySegTree(int _n, const vector<int> &arr)
    {
        this->n = _n;
        tree.resize(4 * n);
        lazy.resize(4 * n);
        hasLazy.assign(4 * n, false);
        build(1, 0, n - 1, arr);
    }
 
    inline void build(int idx, int start, int end, const vector<int> &arr)
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
        u.apply(tree[idx], l, r);
 
        if (l != r)
        {
            if (!hasLazy[idx])
            {
                lazy[idx] = u;
                hasLazy[idx] = true;
            }
            else
                lazy[idx].combine(u);
        }
    }
 
    inline void pushdown(int idx, int l, int r)
    {
        if (hasLazy[idx])
        {
            int mid = (l + r) >> 1;
            applyUpdate(idx << 1, l, mid, lazy[idx]);
            applyUpdate(idx << 1 | 1, mid + 1, r, lazy[idx]);
            lazy[idx] = Update();
            hasLazy[idx] = false;
        }
    }
 
    inline void update(int idx, int start, int end, int ql, int qr, Update &u)
    {
        if (end < ql || start > qr)
            return;
        if (start >= ql && end <= qr)
        {
            applyUpdate(idx, ql, qr, u);
            return;
        }
 
        pushdown(idx, start, end);
 
        int mid = (start + end) >> 1;
 
        update(idx << 1, start, mid, ql, qr, u);
        update(idx << 1 | 1, mid + 1, end, ql, qr, u);
 
        tree[idx].merge(tree[idx << 1], tree[idx << 1 | 1]);
    }
 
    inline Node query(int idx, int start, int end, int ql, int qr)
    {
        if (end < ql || start > qr)
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
 
    inline void make_update(int l, int r, int val)
    {
        Update u = Update(val, true);
        update(1, 0, n - 1, l, r, u);
    }
 
    inline Node make_query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};
struct Node
{
    int val;
    Node(int v = LLONG_MAX)
    {
        val = v;
    }
 
    inline void merge(const Node &a, const Node &b)
    {
        val = min(a.val, b.val);
    }
};
 
struct Update
{
    int val;
    bool isSet;
    Update(int v = 0, bool set = false)
    {
        val = v;
        isSet = set;
    }
 
    inline void apply(Node &a, int l, int r)
    {
        if (isSet)
            a.val += val;
    }
 
    inline void combine(Update &other)
    {
        if (other.isSet)
        {
            val += other.val;
            isSet = true;
        }
    }
};
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int q;
    cin >> q;
 
    LazySegTree<Node, Update> tree(n, arr);
 
    while (q--)
    {
        int l, r, v;
        string input;
        getline(cin >> ws, input);
 
        stringstream ss(input);
        vector<int> args;
        while (ss >> v)
            args.push_back(v);
 
        if (args.size() == 2)
        {
            l = args[0];
            r = args[1];
 
            if (l <= r)
            {
                cout << tree.make_query(l, r).val << "
";
            }
            else
            {
 
                int leftAns = tree.make_query(l, n - 1).val;
                int rightAns = tree.make_query(0, r).val;
                cout << min(leftAns, rightAns) << "
";
            }
        }
        else
        {
            l = args[0];
            r = args[1];
            v = args[2];
 
            if (l <= r)
            {
                tree.make_update(l, r, v);
            }
            else
            {
                tree.make_update(l, n - 1, v);
                tree.make_update(0, r, v);
            }
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
template <typename Node>
struct Segtree
{
    int n;
    vector<Node> tree;
 
    Segtree(int _n, vector<int> &arr)
    {
        this->n = _n;
        tree.resize(4 * n);
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
 
    inline Node query(int idx, int start, int end, int ql, int qr)
    {
        if (start > qr || end < ql)
            return Node();
        if (start >= ql && end <= qr)
            return tree[idx];
 
        int mid = (start + end) >> 1;
 
        Node left = query(idx << 1, start, mid, ql, qr);
        Node right = query(idx << 1 | 1, mid + 1, end, ql, qr);
 
        Node ans;
 
        ans.merge(left, right);
 
        return ans;
    }
 
    inline Node make_query(int ql, int qr)
    {
        return query(1, 0, n - 1, ql, qr);
    }
};
struct Node
{
    int val;
    Node(int v = INT_MIN)
    {
        val = v;
    }
 
    inline void merge(const Node &a, const Node &b)
    {
        val = max(a.val, b.val);
    }
};
int rangesum(int l, int r, vector<Segtree<Node>> &trees)
{
    int ans = 0;
 
    for (int i = 0; i < trees.size(); i++)
    {
        ans += trees[i].make_query(l, r).val;
    }
 
    return ans;
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<vector<int>> arr(m);
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int val;
            cin >> val;
            arr[j].push_back(val);
        }
    }
 
    vector<Segtree<Node>> trees;
    trees.reserve(m);
 
    for (int idx = 0; idx < m; idx++)
    {
        trees.emplace_back(Segtree<Node>(n, arr[idx]));
    }
 
    vector<int> ans(m, 0);
 
    int l = 0, r = 0, maxlen = 0;
 
    while (r < n)
    {
        while (rangesum(l, r, trees) > k)
        {
            l++;
        }
        if (r - l + 1 > maxlen)
        {
            maxlen = r - l + 1;
            for (int i = 0; i < m; i++)
            {
                ans[i] = trees[i].make_query(l, r).val;
            }
        }
        r++;
    }
 
    for(auto i:ans) cout<<i<<" ";
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
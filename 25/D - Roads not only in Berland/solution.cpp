#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
class DSU
{
    vector<int> parent, size;
    int n;
 
public:
    DSU(int n)
    {
        this->n = n;
        for (int i = 0; i <= n; i++)
            parent.push_back(i);
        for (int i = 0; i <= n; i++)
            size.push_back(1);
    }
 
    int findpar(int node)
    {
        if (parent[node] == node)
            return node;
 
        return parent[node] = findpar(parent[node]);
    }
 
    void unionbysize(int u, int v)
    {
        int pu = findpar(u);
        int pv = findpar(v);
 
        if (pu == pv)
            return;
 
        if (size[pu] < size[pv])
        {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
        else
        {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
    }
 
    vector<int> findulimatepar()
    {
        set<int> st;
        for (int i = 1; i <= n; i++)
            st.insert(findpar(i));
 
        vector<int> arr;
        for (auto i : st)
        {
            // cout<<i<<" ";
            arr.push_back(i);
        }
 
        return arr;
    }
};
void solve()
{
    int n;
    cin >> n;
 
    vector<pair<int, int>> extra;
    DSU dsu(n);
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
 
        if (dsu.findpar(u) == dsu.findpar(v))
            extra.push_back({u, v});
        else
            dsu.unionbysize(u, v);
    }
 
    vector<int> unqiuepar = dsu.findulimatepar();
    cout << unqiuepar.size() - 1 << "
";
    for (int i = 0; i < unqiuepar.size() - 1; i++)
    {
        cout << extra[i].first << " " << extra[i].second << " " << unqiuepar[i] << " " << unqiuepar[i + 1] << "
";
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
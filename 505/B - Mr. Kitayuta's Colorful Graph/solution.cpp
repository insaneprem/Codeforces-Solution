#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
class DSU
{
    vector<int> parent, size;
 
public:
    DSU(int n)
    {
        for (int i = 0; i <= n; i++)
            parent.push_back(i);
        for (int i = 0; i <= n; i++)
            size.push_back(1);
    }
 
    int findpar(int node)
    {
        if (node == parent[node])
            return node;
 
        return parent[node] = findpar(parent[node]);
    }
 
    void unionSize(int u, int v)
    {
        int pu = findpar(u);
        int pv = findpar(v);
 
        if (pu == pv)
            return;
 
        if (size[pu] > size[pv])
        {
            size[pu] += size[pv];
            parent[pv] = pu;
        }
        else
        {
            size[pv] += size[pu];
            parent[pu] = pv;
        }
    }
};
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<tuple<int, int, int>> arr(m);
    int maxcolor = 0;
    for (auto &[a, b, c] : arr)
    {
        cin >> a >> b >> c;
        maxcolor = max(maxcolor, c);
    }
 
    vector<DSU> dsu;
 
    for (int i = 0; i <= maxcolor; i++)
    {
        dsu.push_back(DSU(n));
    }
 
    for (auto [a, b, c] : arr)
    {
        dsu[c].unionSize(a, b);
    }
 
    int q;
    cin >> q;
 
    while (q--)
    {
        int a, b;
        cin >> a >> b;
 
        int ans = 0;
        for (int i = 1; i <= maxcolor; i++)
        {
            if (dsu[i].findpar(a) == dsu[i].findpar(b))
                ans++;
        }
          
        cout << ans << '
';
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
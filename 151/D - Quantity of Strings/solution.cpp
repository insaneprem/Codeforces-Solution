#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1e9 + 7;
class DSU
{
    int n;
    vector<int> parent, size;
 
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
 
    void unionSize(int u, int v)
    {
        int pu = findpar(u);
        int pv = findpar(v);
 
        if (pu == pv)
            return;
 
        if (size[pu] < size[pv])
        {
            size[pv] += size[pu];
            parent[pu] = pv;
        }
        else
        {
            size[pu] += size[pv];
            parent[pv] = pu;
        }
    }
 
    int findsize()
    {
        set<int> st;
 
        for (int i = 1; i <= n; i++)
            st.insert(findpar(i));
 
        return st.size();
    }
};
int modexp(int base, int exp)
{
    base %= MOD;
    int ans = 1;
 
    while (exp)
    {
        if (exp & 1)
            ans = (ans * base) % MOD;
 
        base = (base * base) % MOD;
        exp >>= 1;
    }
 
    return ans;
}
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    if (k == 1)
    {
        cout << modexp(m, n);
        return;
    }
 
    DSU dsu(n);
    for (int i = 1; i <= n - k + 1; i++)
    {
        for (int j = 0; j < k; j++)
        {
            dsu.unionSize(i + j, i + k - 1 - j);
        }
    }
 
    int ans = dsu.findsize();
 
    cout << modexp(m, ans);
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
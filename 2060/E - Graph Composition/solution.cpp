#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
class DSU {
public:
    vector<int> parent, rank;
 
    DSU(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            parent[i] = i;
        }
    }
 
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); 
        }
        return parent[x];
    }
 
    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
 
        if (rootX == rootY) return false;
 
        // Union by rank
        if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
        return true;
    }
}; 
void solve(){
     int n, m1, m2;
        cin >> n >> m1 >> m2;
 
        vector<pair<int, int>> edgesF(m1), edgesG(m2);
        for (int i = 0; i < m1; i++) {
            cin >> edgesF[i].first >> edgesF[i].second;
        }
        for (int i = 0; i < m2; i++) {
            cin >> edgesG[i].first >> edgesG[i].second;
        }
 
        DSU dsuG(n);
        for (auto it : edgesG) {
            dsuG.unite(it.first, it.second);
        }
 
        DSU dsuF(n);
        set<pair<int, int>> edgesToRemove;
        for (auto &it : edgesF) {
            int u=it.first;
            int v=it.second;
            if (dsuG.find(u) != dsuG.find(v)) {
                edgesToRemove.insert({u, v});
            } else {
                dsuF.unite(u, v);
            }
        }
 
        unordered_map<int, vector<int>> gComponents;
        for (int i = 1; i <= n; ++i) {
            gComponents[dsuG.find(i)].push_back(i);
        }
 
        int edgesToAdd = 0;
        for (auto &it : gComponents) {
            set<int> uniqueFComponents;
            for (int node : it.second) {
                uniqueFComponents.insert(dsuF.find(node));
            }
            edgesToAdd += uniqueFComponents.size() - 1;
        }
 
        cout << edgesToRemove.size() + edgesToAdd ;
}
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t--) {
        solve();
        cout<<"
";
    }
}
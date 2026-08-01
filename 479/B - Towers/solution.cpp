#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve() {
    int n, k;
    cin >> n >> k;
 
    set<pair<int,int>> st; 
    for (int i = 1; i <= n; i++) {
        int val; 
        cin >> val;
        st.insert({val, i});
    }
 
    if (n == 1) {
        cout << 0 << " " << 0 << "
";
        return;
    }
 
    vector<pair<int,int>> ops;      
    int bestDiff = st.rbegin()->first - st.begin()->first;             
 
    for (int step = 0; step < k; step++) {
        auto minIt = st.begin();
        auto maxIt = prev(st.end());
 
        int minH = minIt->first, minId = minIt->second;
        int maxH = maxIt->first, maxId = maxIt->second;
 
       
        if (maxH - minH <= 1) break;
 
        ops.push_back({maxId, minId});
        st.erase(minIt);
        st.erase(maxIt);
        st.insert({minH + 1, minId});
        st.insert({maxH - 1, maxId});
 
        
        int curDiff = st.rbegin()->first - st.begin()->first;
        if (curDiff < bestDiff) {
            bestDiff = curDiff;
        }
    }
 
    
    cout << bestDiff << " " << ops.size() << "
";
    for (int i = 0; i < ops.size(); i++) {
        cout << ops[i].first << " " << ops[i].second << "
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
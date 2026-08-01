#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
 
void solve() {
    int n, m;
    cin >> n >> m;
 
    vector<set<int>> cards(n);
    vector<pair<int, int>> cows; 
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int card;
            cin >> card;
            cards[i].insert(card);  
        }
        cows.push_back({*cards[i].begin(), i});  
    }
 
    sort(cows.begin(), cows.end());  
 
    vector<int> order;
    for (auto it : cows) {
        order.push_back(it.second);  
    }
 
    int topcard = -1;
    bool valid = true;
    
    
    for (int round = 0; round < m && valid; round++) {
        for (int i = 0; i < n && valid; i++) {
            int idx = order[i];
            auto &deck = cards[idx];
            
            
            auto it = deck.upper_bound(topcard);
            
            if (it == deck.end()) {
                valid = false;  
            } else {
                topcard = *it;  
                deck.erase(it); 
            }
        }
    }
 
    if (valid) {
        for (int i = 0; i < n; i++) {
            cout << order[i] + 1 << " ";
        }
    } else {
        cout << "-1";
    }
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
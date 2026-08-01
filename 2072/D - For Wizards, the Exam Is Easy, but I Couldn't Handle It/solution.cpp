#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define ld long double
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
 
    int bestdel = 0;
    pair<int,int> best = {1,1};
 
    for (int l = 0; l < n; l++) {
        int a = 0 , b = 0;
 
        for (int r = l; r < n; r++) {
            if (r == l) {
                int val = 0;
                if (val < bestdel) {
                    bestdel = val;
                    best.first = l + 1;
                    best.second = r + 1;
                }
                continue;
            }
 
            if (arr[r] > arr[l]) {
                a++;
            } else if (arr[r] < arr[l]) {
                b++;
            }
 
            int val = a - b;
 
            if (val < bestdel) {
                bestdel = val;
                best.first = l + 1;
                best.second = r + 1;
            }
        }
    }
 
    cout << best.first << " " << best.second;
}
 
signed main(){
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
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
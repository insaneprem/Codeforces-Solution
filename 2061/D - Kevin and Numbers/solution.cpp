#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int mod = 998244353;
void solve()
{
    int n, m; 
    cin >> n >> m;
 
    vector<int> arr(n); 
    for (auto &i:arr) cin>>i;
 
    sort(arr.begin(), arr.end()); 
    
    priority_queue<int> pq; 
 
    for (int i = 0; i < m; i++) {
       int val;
       cin >> val; 
       pq.push(val); 
    }
 
    int idx = n - 1; 
 
    while (!pq.empty()) {
         if(pq.size() > (idx + 1)) { 
            cout << "NO" << '
';
            return;
         }
         int top = pq.top();
         pq.pop();
         
        if (top < arr[idx]) {
             cout << "NO" << '
';
            return;
        }
        if (top == arr[idx]) { 
           idx--;
        } else if (top > arr[idx]) { 
           pq.push(top / 2);
           pq.push(top - top/2);
        }
    }
    
    if (pq.empty() && idx == -1) { 
        cout << "Yes" ;
    } else {
         cout << "No";
    }
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    pbds front, back;
 
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        arr[i] = val;
 
        back.insert(val);
    }
 
    int ans = 0;
 
    for (int i = 0; i < n - 1; i++)
    {
        back.erase(arr[i]);
 
        if (i > 0)
        {
            int left = front.size()  - front.order_of_key(arr[i]) ;
            int right = back.order_of_key(arr[i]);
            
            ans+=(left *right);
            // cout << left << " " << right << '
';
        }
 
        front.insert(arr[i]);
    }
    
    cout<<ans;
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
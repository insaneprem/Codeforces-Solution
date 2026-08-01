#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<pair<int, int>> arr(m);
 
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i].second >> arr[i].first;
    }
 
    sort(begin(arr), end(arr) , greater<>());
 
    int ans = 0;
    
    for (auto i : arr)
    {
       
        int take = min(n, i.second);
        ans += take * i.first;
        n -= take;
 
        if (n == 0)
            break;
    }
 
    cout << ans;
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
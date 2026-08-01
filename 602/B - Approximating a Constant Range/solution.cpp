#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int l = 0, r = 0;
    int ans = 1;
    multiset<int> mst;
 
    while (r < n)
    {
        mst.insert(arr[r]);
        while (*mst.rbegin() - *mst.begin() > 1)
        {
            mst.erase(mst.find(arr[l]));
            l++;
        }
        ans = max(ans, r - l + 1);
        r++;
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
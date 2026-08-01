#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    multiset<int> mst;
 
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
 
        mst.insert(val);
    }
 
    if (k == 1)
    {
        cout << n;
        return;
    }
 
    for (auto i : mst)
    {
 
        if (mst.find(i * k) != mst.end())
        {
            mst.erase(i * k);
        }
    }
 
    cout << mst.size();
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, x;
    cin >> n >> x;
 
    vector<tuple<int, int, int, int>> arr;
 
    for (int i = 0; i < n; i++)
    {
        int l, r, c;
        cin >> l >> r >> c;
 
        auto it1 = make_tuple(l, 0, r - l + 1, c);
        auto it2 = make_tuple(r, 1, r - l + 1, c);
 
        arr.push_back(it1);
        arr.push_back(it2);
    }
 
    sort(begin(arr), end(arr));
    map<int, int> mp;
 
    int mincost = 1e18;
    for (auto [time, event, len, cost] : arr)
    {
        if (event == 1)
        {
            if (mp.find(len) == mp.end())
                mp[len] = cost;
            else
                mp[len] = min(mp[len], cost);
        }
        else
        {
            int req = x - len;
            if (mp.find(req) != mp.end())
                mincost = min(mincost, cost + mp[req]);
        }
    }
 
    cout << (mincost == 1e18 ? -1 : mincost);
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
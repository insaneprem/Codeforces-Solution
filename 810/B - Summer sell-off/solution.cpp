#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, f;
    cin >> n >> f;
 
    vector<pair<int, int>> arr(n);
    for (auto &i : arr)
        cin >> i.first >> i.second;
 
    sort(begin(arr), end(arr), [](auto a, auto b)
         {
     int val1 = max(0LL,min(a.first,a.second - a.first));
     int val2 = max(0LL,min(b.first,b.second - b.first));
     return val1>val2; });
 
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (i < f)
            ans += min(arr[i].second, arr[i].first * 2);
        else
            ans += min(arr[i].first, arr[i].second);
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
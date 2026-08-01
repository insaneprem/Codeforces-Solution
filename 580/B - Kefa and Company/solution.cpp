#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, d;
    cin >> n >> d;
 
    vector<pair<int, int>> arr(n);
    for (auto &i : arr)
        cin >> i.first >> i.second;
 
    sort(begin(arr), end(arr), [](auto a, auto b)
         { return a.first < b.first; });
 
        int l = 0,
            r = 0, maxRes = 0, currRes = 0;
    while (r < n)
    {
        while (arr[r].first >= arr[l].first + d)
        {
            currRes -= arr[l].second;
            l++;
        }
        currRes += arr[r].second;
        maxRes = max (maxRes,currRes);
        r++;
    }
 
    cout<<maxRes;
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
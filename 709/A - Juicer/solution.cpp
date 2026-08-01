#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, b, d;
    cin >> n >> b >> d;
 
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
 
        if (val <= b)
            arr.push_back(val);
    }
 
    int currsum = 0;
    int ans = 0;
    for (auto i : arr)
    {
        currsum += i;
 
        if (currsum > d)
        {
            ans++;
            currsum = 0;
        }
    };
 
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
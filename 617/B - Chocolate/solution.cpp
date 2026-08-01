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
 
    int cnt = accumulate(begin(arr), end(arr), 0LL);
 
    if (cnt <= 1)
    {
        cout << cnt;
        return;
    }
 
    vector<int> ans;
    int zerocnt = 0;
 
    for (auto i : arr)
    {
        if (i == 0)
            zerocnt++;
        else
        {
            ans.push_back(zerocnt + 1);
            zerocnt = 0;
        }
    }
 
    int res = 1;
    for (int i = 1; i < ans.size(); i++)
        res *= ans[i];
 
    cout << res;
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
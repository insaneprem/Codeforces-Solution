#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<pair<int, int>> arr(n);
 
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i-1].first;
        arr[i-1].second = i;
    }
 
    sort(begin(arr), end(arr));
 
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (k - arr[i].first >= 0)
        {
            ans.push_back(arr[i].second);
            k -= arr[i].first;
        }
        else
            break;
    }
 
    cout << ans.size() << "
";
 
    for (auto i : ans)
        cout << i << " ";
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
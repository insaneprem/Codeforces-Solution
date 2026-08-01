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
 
    for (int i = 0; i < n; i++)
    {
        int mini = 1e18, maxi = -1e18;
 
        if (i > 0)
            mini = min(mini, abs(arr[i] - arr[i - 1]));
        if (i < n - 1)
            mini = min(mini, abs(arr[i] - arr[i + 1]));
 
        maxi = max({maxi, abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1])});
 
        cout << mini << " " << maxi << "
";
    }
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
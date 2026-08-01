#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    string dir;
    cin >> dir;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int ans = LLONG_MAX;
    for (int i = 1; i < n; i++)
    {
        if (dir[i] == 'L' && dir[i - 1] == 'R')
            ans = min(ans, (arr[i] - arr[i - 1] + 1) / 2);
    }
 
    cout << (ans == LLONG_MAX ? -1 : ans);
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
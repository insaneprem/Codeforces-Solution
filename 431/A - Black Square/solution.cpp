#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    vector<int> arr(4);
    for (auto &i : arr)
        cin >> i;
 
    string str;
    cin >> str;
 
    int ans = 0;
    for (auto i : str)
    {
        ans += arr[(i - '0') - 1];
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
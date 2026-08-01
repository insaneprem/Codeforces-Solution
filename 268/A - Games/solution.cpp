#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr;
    map<int, int> cnt;
 
    for (int i = 0; i < n; i++)
    {
        int home, guest;
        cin >> home >> guest;
 
        arr.push_back(home);
        cnt[guest]++;
    }
 
    int ans = 0;
 
    for (auto i : arr)
        ans += cnt[i];
 
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
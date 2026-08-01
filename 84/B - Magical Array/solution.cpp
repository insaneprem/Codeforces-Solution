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
 
    map<int, int> mp;
 
    int l = 0, r = 0;
    int ans = 0;
    while (r < n)
    {
        mp[arr[r]]++;
        while (mp.size() > 1)
        {
            mp[arr[l]]--;
            if (mp[arr[l]] == 0)
                mp.erase(arr[l]);
            l++;
        }
 
        ans += (r - l + 1);
        r++;
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
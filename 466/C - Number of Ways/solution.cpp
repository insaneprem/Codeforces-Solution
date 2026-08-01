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
 
    vector<int> suffix = arr;
    partial_sum(rbegin(suffix), rend(suffix), rbegin(suffix));
 
    if (suffix[0] % 3 != 0)
    {
        cout << "0";
        return;
    }
 
    int needsum = suffix[0] / 3;
    map<int, int> mp;
 
    int currsum = 0, ans = 0;
 
    for (int i = 0; i < n - 1; i++)
    {
        currsum += arr[i];
        if (mp.find(needsum) != mp.end() && suffix[i + 1] == needsum)
            ans += mp[needsum];
 
        mp[currsum]++;
    }
    cout << ans;
 
    // for(auto i:arr) cout<<i<<" ";
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
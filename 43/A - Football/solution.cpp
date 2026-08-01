#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    map<string, int> mp;
 
    while (n--)
    {
        string str;
        cin >> str;
        mp[str]++;
    }
 
    string ans = mp.begin()->first;
    int freq = mp.begin()->second;
    for (auto i : mp)
    {
        if (i.second > freq)
        {
            freq = i.second;
            ans = i.first;
        }
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
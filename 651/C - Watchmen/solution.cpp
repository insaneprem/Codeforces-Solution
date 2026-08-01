#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    map<int, int> mp1, mp2;
    map<pair<int,int>,int> mp3;
    int duplicate = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
 
        mp1[a]++;
        mp2[b]++;
        mp3[{a,b}]++;
    }
 
    int ans = 0;
 
    for (auto [_, val] : mp1)
    {
        ans += (val * (val - 1)) / 2;
    }
    for (auto [_, val] : mp2)
    {
        ans += (val * (val - 1)) / 2;
    }
    for (auto [_, val] : mp3)
    {
        ans -= (val * (val - 1)) / 2;
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
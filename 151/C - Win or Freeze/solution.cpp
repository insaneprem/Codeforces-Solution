#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "1
0";
        return;
    }
 
    map<int, int> mp;
    int temp = n;
    for (int i = 2; i * i <= temp; i++)
    {
        while (n % i == 0)
        {
            mp[i]++;
            n /= i;
        }
    }
 
    if (n > 1)
        mp[n]++;
 
    if (mp.size() == 1 && (*mp.begin()).second == 1)
    {
        cout << "1
0";
        return;
    }
 
    int ans = 1;
    int cnt = 0;
    int freq = 0;
 
    for (auto [_, val] : mp)
    {
        // cout<<_<<" "<<val<<"
";
        if (cnt < 2)
            ans *= _;
        cnt++;
        freq += val;
    }
 
    if (freq > 2)
    {
        if (mp.size() == 1)
            ans = ans * ((*mp.begin()).first);
        cout << "1
";
        cout << ans;
    }
    else
        cout << 2;
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
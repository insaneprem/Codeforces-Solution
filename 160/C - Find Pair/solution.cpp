#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    map<int, int> mp;
 
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
 
        mp[val]++;
    }
 
    int first;
    for (auto [val, freq] : mp)
    {
        int range = freq * n;
 
        if (k <= range)
        {
            first = val;
            break;
        }
        k -= range;
    }
 
    int second;
 
    for (auto [val, freq] : mp)
    {
        int block = mp[first] * freq;
 
        if (k <= block)
        {
            second = val;
            break;
        }
        k -= block;
    }
 
    cout << first << " " << second;
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
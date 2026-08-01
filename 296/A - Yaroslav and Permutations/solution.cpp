#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    map<int, int> mp;
 
    int maxFreq = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
 
        mp[val]++;
        maxFreq = max(maxFreq, mp[val]);
    }
 
    if (n >= 2 * maxFreq - 1)
        cout << "YES";
    else
        cout << "NO";
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
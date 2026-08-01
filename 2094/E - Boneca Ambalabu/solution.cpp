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
 
    vector<int> bits(32);
 
    for (int i = 0; i < 32; i++)
    {
        for (auto num : arr)
        {
            if (num & (1 << i))
                bits[i]++;
        }
    }
 
    int ans = 0;
 
    for (auto num : arr)
    {
        int val = 0;
        for (int i = 0; i < 32; i++)
        {
            if (num & (1 << i))
            {
                val += (1 << i) * (n - bits[i]);
            }
            else
                val += (1 << i) * bits[i];
        }
 
        ans = max(ans, val);
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
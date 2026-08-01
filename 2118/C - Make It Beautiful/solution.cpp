#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n;
    int k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int ans = 0;
    vector<int> ops;
 
    for (auto i : arr)
    {
        ans += __builtin_popcountll(i);
        while (true)
        {
            int cost = 1LL << (__builtin_ctzll(~i));
            if (cost > k)
                break;
            ops.push_back(cost);
            i += cost;
        }
    }
 
    sort(begin(ops), end(ops));
 
    for (auto i : ops)
    {
        if (i > k)
            break;
        k -= i;
        ans++;
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
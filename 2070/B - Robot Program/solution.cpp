#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, x, k;
    cin >> n >> x >> k;
 
    string str;
    cin >> str;
 
    vector<long long> prefix(n + 1, 0);
    for (int i = 0; i < n; ++i)
    {
        prefix[i + 1] = prefix[i] + (str[i] == 'R' ? 1 : -1);
    }
 
    int ans = 0, pos = x;
 
    int first = -1;
    for (int i = 1; i <= n; i++)
    {
        if (pos + prefix[i] == 0)
        {
            first = i;
            break;
        }
    }
 
    if (first == -1)
    {
        cout << 0;
        return;
    }
 
    ans += (first <= k);
 
    int len = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (prefix[i] == 0)
        {
            len = i;
            break;
        }
    }
 
    if (len == 0)
    {
        cout << ans;
        return;
    }
 
    if (k > first)
    {
        ans += (k - first) / len;
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
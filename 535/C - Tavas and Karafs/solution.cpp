#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int A, B, n;
    cin >> A >> B >> n;
 
    for (int i = 1; i <= n; i++)
    {
        int left, t, m;
        cin >> left >> t >> m;
 
        if (A + (left - 1) * B > t)
        {
            cout << -1 << "
";
            continue;
        }
 
        int l = left, r = left + 2000000;
        int ans = -1;
 
        while (l <= r)
        {
            int mid = (l + r) >> 1;
 
            int mid_element = A + (mid - 1) * B;
 
            if (mid_element > t)
            {
                r = mid - 1;
                continue;
            }
 
           
            int len = mid - left + 1;
            int left_ele = A + (left - 1) * B;
            int tsum = ((left_ele + mid_element) * len) / 2;
 
            if (tsum <= t * m)
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << "
";
    }
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
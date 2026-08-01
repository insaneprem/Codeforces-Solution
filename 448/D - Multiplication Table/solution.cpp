#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k;
 
    cin >> n >> m >> k;
 
    int l = 0, r = (n * m) + 7;
 
    while (l <= r)
    {
        int mid = (l + r) >> 1;
 
        int cnt = 0;
        for (int i = 1; i <= n; i++)
            cnt += min(m, mid / i);
 
        if (cnt >= k)
            r = mid - 1;
        else
            l = mid + 1;
    }
 
    cout << l;
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
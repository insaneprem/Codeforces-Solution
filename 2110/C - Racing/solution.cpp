#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> d(n + 1), l(n + 1), r(n + 1), minh(n + 1), maxh(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> d[i];
    for (int i = 1; i <= n; i++)
        cin >> l[i] >> r[i];
 
    minh[0] = maxh[0] = 0;
 
    for (int i = 1; i <= n; i++)
    {
        int prevmin = minh[i - 1], prevmax = maxh[i - 1];
 
        if (d[i] == 0)
        {
            minh[i] = prevmin;
            maxh[i] = prevmax;
        }
        else if (d[i] == 1)
        {
            minh[i] = prevmin + 1;
            maxh[i] = prevmax + 1;
        }
        else
        {
            minh[i] = prevmin;
            maxh[i] = prevmax + 1;
        }
        minh[i] = max(minh[i], l[i]);
        maxh[i] = min(maxh[i], r[i]);
 
        if (minh[i] > maxh[i])
        {
            cout << -1;
            return;
        }
    }
 
    vector<int> ans(n + 1);
    int curr = minh[n];
    for (int i = n; i >= 1; i--)
    {
        if (d[i] != -1)
        {
            ans[i] = d[i];
            curr -= d[i];
        }
        else
        {
            if (curr >= minh[i - 1] && curr <= maxh[i - 1])
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = 1;
                curr--;
            }
        }
    }
 
    for (int i = 1; i <= n; i++)
        cout << ans[i] << " ";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n + 1), d(n + 1), idx(n + 1);
    vector<bool> vis(n + 1, false);
    queue<int> q;
    int ans = 0;
 
    for (int i = 1; i <= n; i++) cin >> arr[i], idx[arr[i]] = i;
    for (int i = 1; i <= n; i++) cin >> d[i];
 
    for (int j = 1; j <= n; j++) {
        int pos = d[j];
 
        if (!vis[pos])
        {
            q.push(pos);
            vis[pos] = true;
            ans++;
        }
 
        while (!q.empty())
        {
            int cur = q.front();
            q.pop();
            int i = idx[cur];
            if (!vis[i])
            {
                q.push(i);
                vis[i] = true;
                ans++;
            }
        }
        cout << ans << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
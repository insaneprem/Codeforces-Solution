#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
    deque<int> dq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dq[i];
    }
 
    while (dq.size() > 1 && k)
    {
        int mini = min(dq.front(), dq.back());
        if (k < 2 * mini)
        {
            dq.front() -= k / 2 + k % 2;
            dq.back() -= k / 2;
            k = 0;
        }
        else
        {
            dq.front() -= mini;
            dq.back() -= mini;
            k -= 2 * mini;
        }
        if (dq.front() == 0)
            dq.pop_front();
        if (dq.back() == 0)
            dq.pop_back();
    }
    int ans = n - dq.size();
    cout << ans + (dq.size() && dq.front() <= k);
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
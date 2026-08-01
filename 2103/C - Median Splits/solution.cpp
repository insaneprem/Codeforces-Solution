#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n), prefix(n + 1);
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        prefix[i + 1] = prefix[i] + (arr[i] <= k ? 1 : -1);
    }
 
    bool flag = false;
    int mini = LLONG_MAX;
 
    for (int r = 2; r < n && !flag; r++)
    {
        if (prefix[r - 1] >= 0) mini = min(mini, prefix[r - 1]);
        if (mini != LLONG_MAX && prefix[r] >= mini) flag = 1;
    }
 
    if (!flag)
    {
        vector<int> prefixmini(n + 1, prefix[1]), suffixmini(n + 2, LLONG_MAX);
 
        for (int i = n - 1; i >= 1; i--)
        {
            suffixmini[i] = min(prefix[i], suffixmini[i + 1]);
        }
 
        for (int l = 1; l <= n - 2 && !flag; l++)
        {
            if (prefix[l] >= 0 && suffixmini[l + 1] <= prefix[n])
                flag = 1;
        }
 
        for (int i = 2; i < n; i++)
            prefixmini[i] = min(prefixmini[i - 1], prefix[i]);
        
 
        for (int r = 2; r < n && !flag; r++)
        {
            if (prefix[r] <= prefix[n] && prefixmini[r - 1] <= prefix[r])
                flag = 1;
        }
    }
 
    cout << (flag ? "YES" : "NO");
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
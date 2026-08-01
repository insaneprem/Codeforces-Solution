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
 
    vector<int> pref(n), suff(n + 1);
    pref[0] = arr[0];
    for (int i = 1; i < n; i++)
        pref[i] = max(pref[i - 1], arr[i]);
    for (int i = n - 1; i >= 0; i--)
        suff[n - i] = suff[n - i - 1] + arr[i];
 
    for (int k = 1; k <= n; k++)
    {
        int ans = suff[k];
        if (k < n)
            ans = max(ans, suff[k - 1] + pref[n - k - 1]);
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
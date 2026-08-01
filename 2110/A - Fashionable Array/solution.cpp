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
 
    sort(arr.begin(), arr.end());
    int ans = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if ((arr[i] + arr[j]) % 2 == 0)
            {
                ans = min(ans, i + (n - 1 - j));
            }
        }
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
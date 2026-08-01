#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> l(n), r(n);
    for (auto &i : l)
        cin >> i;
    for (auto &i : r)
        cin >> i;
 
    vector<int> arr(n);
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        total += max(l[i], r[i]);
        arr[i] = min(l[i], r[i]);
    }
 
    sort(arr.begin(), arr.end(), greater<int>());
 
    int extra = 0;
    for (int i = 0; i < k - 1 && i < n; i++)
    {
        extra += arr[i];
    }
 
    cout << total + extra + 1;
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
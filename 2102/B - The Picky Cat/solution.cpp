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
 
    int first = abs(arr[0]), val = 0;
    for (int i = 1; i < n; i++)
    {
        if (abs(arr[i]) < first)
            val++;
    }
 
    cout << ((val <= n / 2) ? "YES" : "NO");
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
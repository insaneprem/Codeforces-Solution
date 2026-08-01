#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> arr1(5, 0), arr2(5, 0);
 
    for (int i = 1; i <= n; i++)
        arr1[i % 5]++;
    for (int i = 1; i <= m; i++)
        arr2[i % 5]++;
 
    cout << (arr1[0] * arr2[0] + arr1[1] * arr2[4] + arr1[2] * arr2[3] + arr1[3] * arr2[2] + arr1[4] * arr2[1]);
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
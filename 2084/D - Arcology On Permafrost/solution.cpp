#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int val = min(n / (m + 1), n - m * k);
    int val2 = (n - val) / m;
 
    vector<int> arr(n, 0);
    for (int i = 0; i < val; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            arr[i + j * val2] = i;
        }
    }
 
    for (auto &i : arr)
        cout << i << " ";
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
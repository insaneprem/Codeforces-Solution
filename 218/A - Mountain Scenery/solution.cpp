#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(2 * n + 1);
    for (auto &i : arr)
        cin >> i;
 
    for (int i = 0; i <= 2 * n; i++)
    {
        if (k && i % 2 && arr[i] > arr[i - 1] + 1 && arr[i] > arr[i + 1] + 1)
        {
            k--;
            cout << arr[i] - 1 << " ";
        }
        else
            cout << arr[i] << " ";
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
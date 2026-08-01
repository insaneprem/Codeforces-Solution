#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    int mini = 1e9;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
 
    int currsum = 0;
    int r = 1;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        // cout << currsum <<" "; 
        if ((i + 1) >= k)
        {
            if (currsum < mini)
            {
                mini = currsum;
                r = i + 1;
            }
            currsum -= arr[i - k + 1];
        }
    }
 
    cout << r - k + 1;
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
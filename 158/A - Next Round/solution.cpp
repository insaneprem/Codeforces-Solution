#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    sort(begin(arr), end(arr), greater<>());
    
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[k - 1] || arr[i]<1)
        {
            cout << i;
            return;
        }
    }
 
    cout << n;
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
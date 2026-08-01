#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    int ans = 0;
    for (int i = 0; i < n;)
    {
        int j = i;
        while (j + 1 < n && arr[j + 1] == arr[i]) j++;
 
        if ((i == 0 || arr[i - 1] < arr[i]) && (j == n - 1 || arr[j + 1] < arr[i])) ans++;
        
        i = j + 1;
    }
    
    cout << ans;
}
 
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "val", stdin);
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
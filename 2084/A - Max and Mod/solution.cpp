#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    
    if (n % 2 == 0)
    {
        cout << -1;
        return;
    }
 
    
    vector<int> arr(n);
    arr[0] = n;
    arr[1] = 2;
    arr[2] = 1;
    for (int i = 3; i < n; i++) arr[i] = i;
    
    for (auto i : arr) cout << i << " ";
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
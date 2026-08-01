#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n + 1);
 
    if (n == 2)
    {
        cout << "2 1";
        return;
    }
 
    for (int i = 1; i <= n - 2; i++)
    {
        if (k % 2 == 1)
            arr[i] = n;
        else
            arr[i] = n - 1;
    }
    
    arr[n - 1] = n;
    arr[n] = n - 1;
 
    for (int i = 1; i <= n; i++) cout << arr[i] << " ";
    
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
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    int total = 0, maxi = 0, oddcnt = 0;
    
    for (auto &i : arr)
    {
        cin >> i;
        maxi = max(maxi, i);
        total += i;
        oddcnt += (i & 1);
    }
    
    if(oddcnt == 0||n == 1|| oddcnt == n) cout << maxi;
    else if((total - oddcnt) % 2 == 0) cout << total - oddcnt + 1;
    else cout << total - oddcnt;
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
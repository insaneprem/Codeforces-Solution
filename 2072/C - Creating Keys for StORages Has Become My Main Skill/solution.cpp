#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int xr(int k)
{
    if (k <= 0) return 0;
    int b = 0;
    while ((1 << b) < k) b++;
    return (b == 0 ? 0 : ((1 << b) - 1));
}
void solve()
{
    int n, x;
    cin >> n >> x;
 
    if (n == 1)
    {
        cout << x;
        return;
    }
 
    int p = 0;
    while (p < 30 && (x & (1 << p))) p++;
    
    int val = (p < 30 ? (1 << p) : (1 << 30));
 
    int maxi = 0;
    int upper = n;
    for (int k = 0; k <= upper; k++)
    {
        if (k > val)
            break;
        int cxr = xr(k);
        bool need = ((x & ~cxr) != 0);
        int req = k + (need ? 1 : 0);
        if (req <= n)
            maxi = k;
    }
 
    vector<int> ans;
    for (int i = 0; i < maxi; i++)
    {
        ans.push_back(i);
    }
 
    int cxr = xr(maxi);
    int can = x & ~cxr;
    if (can != 0) ans.push_back(can);
 
    while (ans.size() < n) ans.push_back(0);
 
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] <<" ";
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
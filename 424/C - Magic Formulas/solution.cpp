#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int getxor(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    int xr = 0;
    for (auto &i : arr)
        cin >> i, xr ^= i;
 
 
    for (int i = 1; i <= n; i++)
    {
        if (n / i % 2 == 1)
            xr ^= getxor(i - 1);
        xr ^= getxor(n % i);
    }
 
    cout << xr;
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
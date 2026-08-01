#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int check(int n)
{
    int lucky = 0;
    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
            lucky++;
        n /= 10;
    }
 
    return lucky;
}
void solve()
{
    int n, k;
    cin >> n >> k;
 
    int ans = 0;
 
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
 
        if (check(val) <= k)
            ans++;
    }
 
    cout << ans;
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
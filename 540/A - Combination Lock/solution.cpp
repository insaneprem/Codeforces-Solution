#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    string curr, original;
    cin >> curr >> original;
 
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a = curr[i] - '0';
        int b = original[i] - '0';
 
        if(a>b) swap(a,b);
        ans += min(abs(a - b) , a - b + 10);
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
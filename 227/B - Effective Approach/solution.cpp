#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        mp[val] = i;
    }
 
    int q;
    cin >> q;
 
    int a = 0, b = 0;
    while (q--)
    {
        int val;
        cin >> val;
 
        a += mp[val];
        b += n - mp[val] + 1;
    }
 
    cout << a << " " << b;
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
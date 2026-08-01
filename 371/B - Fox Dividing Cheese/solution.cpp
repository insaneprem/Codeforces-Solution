#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int a, b;
    cin >> a >> b;
 
    vector<int> primea(3), primeb(3);
 
    while (a % 5 == 0)
        a /= 5, primea[2]++;
    while (a % 3 == 0)
        a /= 3, primea[1]++;
    while (a % 2 == 0)
        a /= 2, primea[0]++;
 
    while (b % 5 == 0)
        b /= 5, primeb[2]++;
    while (b % 3 == 0)
        b /= 3, primeb[1]++;
    while (b % 2 == 0)
        b /= 2, primeb[0]++;
 
    if (a != b)
    {
        cout << -1;
        return;
    }
 
    int ans = 0;
    ans = abs(primea[0] - primeb[0]) + abs(primea[1] - primeb[1]) + abs(primea[2] - primeb[2]);
 
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
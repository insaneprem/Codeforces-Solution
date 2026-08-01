#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    if (str == "0")
    {
        cout << 0;
        return;
    }
    int cnt = count(begin(str), end(str), '1');
 
    int ans = (str.size() + 1) / 2;
    ans -= (str.size() % 2 == 1 && cnt == 1);
 
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
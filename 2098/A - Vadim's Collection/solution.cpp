#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    multiset<char> mst(str.begin(), str.end());
    string ans = "";
 
    for (int i = 1; i <= 10; i++)
    {
        auto it = mst.lower_bound(char('0' + (10 - i)));
        ans.push_back(*it);
        mst.erase(it);
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
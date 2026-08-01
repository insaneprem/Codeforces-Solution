#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int val1 = 0, val2 = 0;
    for (auto i : s)
    {
        if (i == '-')
            val1++;
        else if (i == '_')
            val2++;
    }
 
    if (val1 < 2 || val2 == 0)
    {
        cout << 0;
        return;
    }
 
    cout << (val2 * (val1 / 2) * (val1 - (val1 / 2)));
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
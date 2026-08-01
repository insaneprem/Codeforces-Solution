#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    string yes = to_string(k);
    string no = "0";
 
    string str;
    str.reserve(n * (yes.size() + 1));
 
    for (int i = 1; i <= n; i++)
    {
        int mask = i - 1;
 
        if (i > 1)
        {
            str += ' ';
        }
 
        if (((n - 1) & mask) == mask)
        {
            str += yes;
        }
        else
        {
            str += no;
        }
    }
 
    cout << str;
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
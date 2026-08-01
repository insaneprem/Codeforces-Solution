#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int a, b;
    cin >> a >> b;
 
    int val = 6 - max(a, b) + 1;
 
    if (val == 1)
        cout << "1/6";
    else if (val == 2)
        cout << "1/3";
    else if (val == 3)
        cout << "1/2";
    else if (val == 4)
        cout << "2/3";
    else if (val == 5)
        cout << "5/6";
    else
        cout << "1/1";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int a, b;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int val;
            cin >> val;
 
            if (val == 1)
            {
                a = i;
                b = j;
            }
        }
    }
 
    cout << abs(a - 3) + abs(b - 3);
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
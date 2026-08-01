#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, onea = 0, oneb = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
 
    for (int i = 0; i < n; i++)
    {
        if ((i % 2 == 0 && a[i] == '1') || (i % 2 == 1 && b[i] == '1')) onea++;
        if ((i % 2 == 1 && a[i] == '1') || (i % 2 == 0 && b[i] == '1')) oneb++;
    }
 
    cout << (onea <= n / 2 && oneb <= (n + 1) / 2 ? "YES" : "NO");
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
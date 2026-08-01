#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int odd = 0, even = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
 
        sum += val;
        if (val & 1)
            odd++;
        else
            even++;
    }
 
    if (sum % 2 == 0)
        cout << even;
    else
        cout << odd;
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
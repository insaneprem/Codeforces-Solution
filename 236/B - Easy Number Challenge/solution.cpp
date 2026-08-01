#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1073741824;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
 
    int lastval = (a * b * c) + 7;
    vector<int> arr(lastval + 1, 1);
 
    for (int i = 1; i <= lastval; i++)
    {
        for (int j = 2 * i; j <= lastval; j += i)
        {
            arr[j]++;
        }
    }
    // cout<<lastval;
    // for(int i=1;i<=lastval;i++) cout<<arr[i]<<" ";
    int ans = 0;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            for (int k = 1; k <= c; k++)
            {
                ans = (ans + arr[i * j * k]) % MOD;
            }
        }
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int currsum = 0, bus = 0;
 
    for (auto i : arr)
    {
        if (currsum + i > m)
        {
            currsum = i;
            bus++;
        }
        else
            currsum += i;
    }
 
    cout << bus + 1;
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
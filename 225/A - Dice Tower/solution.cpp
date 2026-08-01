#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int top;
    cin >> top;
 
    vector<pair<int, int>> arr(n);
 
    for (auto &i : arr)
        cin >> i.first >> i.second;
 
    for (auto i : arr)
    {
        if (i.first == top || i.first == 7 - top || i.second == 7 - top || i.second == top)
        {
            cout << "NO";
            return;
        }
    }
 
    cout << "YES";
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
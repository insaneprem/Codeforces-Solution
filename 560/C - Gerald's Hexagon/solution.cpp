#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    vector<int> arr(6);
    for (auto &i : arr)
        cin >> i;
 
    cout << ((arr[0] + arr[1] + arr[2]) * (arr[0] + arr[1] + arr[2])) - (arr[0] * arr[0]) - (arr[2] * arr[2]) - (arr[4] * arr[4]);
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
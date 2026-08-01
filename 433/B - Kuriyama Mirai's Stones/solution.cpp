#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    vector<int> sorted = arr;
 
    sort(begin(sorted), end(sorted));
 
    partial_sum(begin(arr), end(arr), begin(arr));
    partial_sum(begin(sorted), end(sorted), begin(sorted));
 
    int q;
    cin >> q;
 
    while (q--)
    {
        int type, l, r;
        cin >> type >> l >> r;
 
        if (type == 1)
        {
            cout << arr[r] - arr[l - 1] << "
";
        }
        else
        {
            cout << sorted[r] - sorted[l - 1] << '
';
        }
    }
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
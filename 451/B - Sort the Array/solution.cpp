#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int l = 0, r = n - 1;
 
    if (is_sorted(begin(arr), end(arr)))
    {
        cout << "yes
";
        cout << "1 1";
        return;
    }
 
    while (l < n - 1 && arr[l] <= arr[l + 1])
        l++;
    while (r > 0 && arr[r] >= arr[r - 1])
        r--;
 
    reverse(arr.begin() + l, arr.begin() + r + 1);
 
    if (is_sorted(begin(arr), end(arr)))
    {
        cout << "yes
";
        cout << l + 1 << " " << r + 1;
    }
    else
        cout << "no";
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
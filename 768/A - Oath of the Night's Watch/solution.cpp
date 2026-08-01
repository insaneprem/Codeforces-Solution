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
 
    int i = 0, j = n - 1;
    sort(begin(arr), end(arr));
    while (i < n && arr[i] == arr[0])
        i++;
    while (j >= 0 && arr[j] == arr[n - 1])
        j--;
 
    if (i > j)
        cout << 0;
    else
        cout << (j - i) + 1;
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
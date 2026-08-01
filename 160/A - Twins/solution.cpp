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
 
    sort(begin(arr), end(arr));
 
    int currcoins = 0;
    int remcoins = accumulate(begin(arr), end(arr), 0LL);
 
    int idx = n - 1;
    int coinpick = 0;
    while (idx >= 0 && currcoins <= remcoins)
    {
        currcoins += arr[idx];
        remcoins -= arr[idx];
        coinpick++;
        idx--;
    }
 
    cout << coinpick;
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
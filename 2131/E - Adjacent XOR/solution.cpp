#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n), brr(n);
    for (auto &i : arr)
        cin >> i;
    for (auto &i : brr)
        cin >> i;
 
    for (int i = 0; i < n - 1; i++)
    {
        if ((arr[i] == brr[i]) || ((arr[i] ^ arr[i + 1]) == brr[i]) || ((arr[i] ^ brr[i + 1]) == brr[i]))
            continue;
        cout << "NO";
        return;
    }
 
    cout << ((arr.back() == brr.back()) ? "YES" : "NO");
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
    cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
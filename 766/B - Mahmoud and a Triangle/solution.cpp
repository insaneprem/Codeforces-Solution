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
 
    for (int i = 1; i < n - 1; i++)
    {
        int a = arr[i - 1], b = arr[i], c = arr[i + 1];
 
        if ((a + b) > c && (b + c) > a && (a + c) > b)
        {
            cout << "YES";
            return;
        }
    }
 
    cout << "NO";
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
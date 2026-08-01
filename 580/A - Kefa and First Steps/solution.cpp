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
 
    int prev = 0;
    int maxLen = 0, currlen = 0;
    for (auto i : arr)
    {
        if (i >= prev)
        {
            currlen++;
        }
        else
            currlen = 1;
        
        prev = i;
        maxLen = max(maxLen, currlen);
    }
 
    cout << maxLen;
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
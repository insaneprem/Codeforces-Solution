#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int arr[n + 2]{};
 
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    int prefix[n + 2]{}, suffix[n + 2]{};
 
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] >= arr[i - 1])
            prefix[i] = 1 + prefix[i - 1];
        else
            prefix[i] = 1;
    }
 
    for (int i = n; i >= 1; i--)
    {
        if (arr[i] >= arr[i + 1])
            suffix[i] = 1 + suffix[i + 1];
        else
            suffix[i] = 1;
    }
 
    int ans = 1;
 
    for (int i = 0; i <= n; i++)
    {
        ans = max(ans, prefix[i] + suffix[i + 1]);
    }
 
    // for(auto i:prefix) cout<<i<<" ";
    // cout<<endl;
    // for(auto i:suffix) cout<<i<<" ";
    // cout<<endl;
 
    cout << ans;
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
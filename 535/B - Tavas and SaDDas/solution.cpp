#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> lucky;
const int limit = 1e9;
void dfs(int num)
{
    if (num > limit)
        return;
 
    lucky.push_back(num);
    dfs(num * 10 + 4);
    dfs(num * 10 + 7);
}
void solve()
{
    int n;
    cin >> n;
 
    dfs(4);
    dfs(7);
 
    sort(begin(lucky), end(lucky));
 
    // for(auto i:lucky) cout<<i<<" ";
    int idx = lower_bound(begin(lucky), end(lucky), n) - begin(lucky);
    cout << idx + 1;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> helper(int k, int sum, int l, int r)
{
    vector<int> ans(k, l);
    int rem = sum - k * l;
 
    for (int i = 0; i < k; i++)
    {
        int v = rem / (k - i);          
        v = min(v, r - l);             
        ans[i] += v;
        rem -= v;
    }
 
    return ans;
}
 
void solve()
{
    int n, k, l, r, ts, sk;
    cin >> n >> k >> l >> r >> ts >> sk;
 
    vector<int> a = helper(k, sk, l , r);
    vector<int> b = helper(n - k, ts - sk, l, r);
 
    for (auto i : a)
        cout << i << " ";
    for (auto i : b)
        cout << i << " ";
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
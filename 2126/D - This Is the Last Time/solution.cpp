#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<tuple<int, int, int>> arr;
 
    for (int i = 0; i < n; i++)
    {
        int l, r, coin;
        cin >> l >> r >> coin;
 
        arr.push_back({l, r, coin});
    }
 
    sort(arr.begin(), arr.end(), [](auto &a, auto &b)
         { return get<2>(a) < get<2>(b); });
    
    for(auto [l,r,coin] : arr){
        if(k>=l && k<=r){
            k=max(k,coin);
        }
    }
 
    cout<<k;
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
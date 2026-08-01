#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, q;
    cin >> n >> q;
 
    vector<int> arr(n), prefix(n + 2, 0);
 
    for (auto &i : arr)
        cin >> i;
 
    vector<pair<int, int>> query(q);
 
    for (int i = 0; i < q; i++)
    {
        cin >> query[i].first >> query[i].second;
    }
 
    for (auto [l, r] : query)
    {
        prefix[l]++;
        prefix[r + 1]--;
    }
 
    partial_sum(begin(prefix), end(prefix), begin(prefix));
 
    priority_queue<pair<int, int>> pq;
 
    for (int i = 1; i <= n; i++)
        pq.push({prefix[i], i});
 
    sort(begin(arr), end(arr), greater<>());
 
    int ans = 0;
 
    for (auto &i : arr)
    {
        auto it = pq.top();
        pq.pop();
 
        ans += it.first * i;
    }
 
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
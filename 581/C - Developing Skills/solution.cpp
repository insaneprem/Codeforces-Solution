#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
typedef pair<int, int> P;
 
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    priority_queue<P, vector<P>, greater<>> pq1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 100)
        {
            int cost = (10 - arr[i] % 10) % 10;
            if (cost > 0)
                pq1.push({cost, i});
        }
    }
 
    while (!pq1.empty() && k > 0)
    {
        auto [cost, idx] = pq1.top();
        pq1.pop();
        if (cost <= k)
        {
            k -= cost;
            arr[idx] += cost;
        }
    }
 
    priority_queue<P> pq2;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 100)
            pq2.push({arr[i], i});
    }
 
    while (!pq2.empty() && k > 0)
    {
        auto [val, idx] = pq2.top();
        pq2.pop();
        if (arr[idx] >= 100)
            continue;
 
        int use = min(k, 100 - arr[idx]);
        arr[idx] += use;
        k -= use;
        if (arr[idx] < 100)
            pq2.push({arr[idx], idx});
    }
 
    int ans = 0;
    for (auto i : arr)
        ans += i / 10;
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
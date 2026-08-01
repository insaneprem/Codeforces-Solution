#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
typedef pair<int, int> P;
void solve()
{
    int sum, limit;
    cin >> sum >> limit;
 
    priority_queue<P> pq;
    for (int i = 1; i <= limit; i++)
    {
        int lsb = (i & (-i));
        pq.push({lsb, i});
    }
 
    vector<int> arr;
    bool flag = 0;
    while (!pq.empty())
    {
        auto [_, val] = pq.top();
        pq.pop();
 
        if (sum - _ >= 0)
        {
            sum -= _;
            arr.push_back(val);
        }
 
        if (sum == 0)
            flag = 1;
    }
 
    if (!flag)
        cout << -1;
    else
    {
        cout << arr.size() << "
";
        for (auto &i : arr)
            cout << i << " ";
    }
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
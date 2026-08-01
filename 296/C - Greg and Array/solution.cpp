#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    vector<tuple<int, int, int>> op(m);
 
    for (auto &[a, b, c] : op)
    {
        cin >> a >> b >> c;
    }
 
    vector<int> contribution(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
 
        contribution[a]++;
        contribution[b + 1]--;
    }
 
    partial_sum(begin(contribution), end(contribution), begin(contribution));
 
    vector<int> temp(n + 2, 0);
 
    for (int i = 0; i < m; i++)
    {
        int l = get<0>(op[i]), r = get<1>(op[i]), val = get<2>(op[i]) * contribution[i + 1];
 
        temp[l] += val;
        temp[r + 1] -= val;
    }
 
    partial_sum(begin(temp), end(temp), begin(temp));
 
    for (int i = 0; i < n; i++)
        cout << arr[i] + temp[i + 1] << " ";
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
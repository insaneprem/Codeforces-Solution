#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    map<int, int> back, front;
 
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
 
        back[a] = b;
        front[b] = a;
    }
 
    int start;
 
    for (auto [node, backval] : back)
    {
        if (front.find(node) == front.end())
        {
            start = node;
            break;
        }
    }
 
    vector<int> ans(n);
    for (int i = 0; i < n; i += 2)
    {
        ans[i] = start;
        start = back[start];
    }
 
    start = back[0];
    for (int i = 1; i < n; i += 2)
    {
        ans[i] = start;
        start = back[start];
    }
 
    for (auto i : ans)
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
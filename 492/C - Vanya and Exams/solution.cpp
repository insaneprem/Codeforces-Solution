#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, r, avg;
    cin >> n >> r >> avg;
 
    vector<pair<int, int>> exam(n);
 
    int currtotal = 0;
    for (auto &i : exam)
    {
        cin >> i.first >> i.second;
    }
    for (auto &i : exam)
    {
        // cin >> i.first >> i.second;
        currtotal += i.first;
    }
 
    int pointreq = (n * avg) - currtotal;
    // cout<<pointreq<<" ";
    // cout<<currtotal;
 
    if (pointreq <= 0)
    {
        cout << 0;
        return;
    }
 
    sort(begin(exam), end(exam), [](auto a, auto b)
         { return a.second < b.second; });
 
    int cost = 0;
    for (auto i : exam)
    {
        // cout << i.first << " " << i.second << "
";
        if (pointreq <= 0)
            break;
 
        int take = min(r - i.first, pointreq);
        pointreq -= take;
        cost += take * i.second;
    }
 
    cout << cost;
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
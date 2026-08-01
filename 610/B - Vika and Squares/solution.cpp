#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n + 1);
    int mini = 1e10;
    for (int i = 1; i <= n; i++)
    {
 
        cin >> arr[i];
 
        mini = min(mini, arr[i]);
    }
 
    vector<int> pos;
 
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == mini)
            pos.push_back(i);
    }
 
    int gap = 0;
 
    for (int i = 0; i < pos.size() - 1; i++)
    {
        gap = max(gap, pos[i + 1] - pos[i] - 1);
    }
 
    gap = max(gap, (pos[0] + n) - pos.back() - 1);
 
    cout << mini * n + gap;
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
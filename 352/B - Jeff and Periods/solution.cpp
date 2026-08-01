#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
 
    vector<int> lastoccurance(2e5, -1), d(2e5, -1);
    vector<bool> candidate(2e5, 1);
    for (int i = 1; i <= n; i++)
    {
        if (lastoccurance[arr[i]] != -1 && candidate[arr[i]])
        {
            int cd = i - lastoccurance[arr[i]];
 
            if (d[arr[i]] == -1)
            {
                d[arr[i]] = cd;
            }
            else
            {
                if (d[arr[i]] != cd)
                    candidate[arr[i]] = 0;
            }
        }
 
        lastoccurance[arr[i]] = i;
    }
 
    set<int> st(arr.begin() + 1, arr.end());
    set<int> st2;
 
    for (auto i : st)
    {
        if (candidate[i])
            st2.insert(i);
    }
 
    cout << st2.size() << "
";
 
    for (auto i : st2)
    {
        cout << i << " " << max(0LL, d[i]) << "
";
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
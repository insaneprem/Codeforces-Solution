#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
 
    vector<vector<int>> nxt(n + 1, vector<int>(k));
    for (int i = 0; i < k; i++)
    {
        nxt[n][i] = n + 1;
    }
 
    for (int r = n - 1; r >= 0; r--)
    {
        for (int c = 0; c < k; c++)
        {
            nxt[r][c] = nxt[r + 1][c];
        }
        nxt[r][str[r] - 'a'] = r + 1;
    }
 
    vector<int> arr(n + 2);
    arr[n + 1] = 0;
    for (int r = n; r >= 0; r--)
    {
        int mini = INT_MAX;
        for (int c = 0; c < k; c++)
        {
            mini = min(mini, arr[nxt[r][c]]);
        }
        arr[r] = mini + 1;
    }
 
    int q;
    cin >> q;
    while (q--)
    {
        string t;
        cin >> t;
 
        int val = 0;
        for (auto ch : t)
        {
            if (val > n)
                break;
            val = nxt[val][ch - 'a'];
        }
        cout << arr[val] << "
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
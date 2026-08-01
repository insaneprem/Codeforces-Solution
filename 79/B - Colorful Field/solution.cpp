#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k, t;
    cin >> n >> m >> k >> t;
 
    set<pair<int, int>> waste;
    vector<int> row(n + 1, 0);
    vector<set<int>> col(n + 1);
 
    for (int i = 0; i < k; i++)
    {
        int r, c;
        cin >> r >> c;
 
        row[r]++;
        waste.insert({r, c});
        col[r].insert(c);
    }
 
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        if (waste.count({r, c}))
            cout << "Waste";
        else
        {
            int wastetillnow = 0;
            for (int i = 1; i < r; i++)
                wastetillnow += row[i];
            wastetillnow += distance(col[r].begin(), col[r].lower_bound(c));
 
            int fruittillnow = (r - 1) * m + c - wastetillnow;
 
            int fruit_index = (fruittillnow - 1) % 3;
            if (fruit_index == 0)
                cout << "Carrots";
            else if (fruit_index == 1)
                cout << "Kiwis";
            else
                cout << "Grapes";
        }
        
        cout<<"
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
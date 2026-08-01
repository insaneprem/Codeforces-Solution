#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    vector<int> rating(n), diff(m);
    for (auto &i : rating) cin >> i;
    for (auto &i : diff) cin >> i;
 
    int kevin = rating[0];
 
    sort(rating.begin(), rating.end());
    sort(diff.begin(), diff.end());
 
    vector<int> rank(m);
 
    for (int i = 0; i < m; i++)
    {
        if (diff[i] <= kevin || diff[i] > diff[m - 1]) rank[i] = 1;
        else
            rank[i] = n - (lower_bound(rating.begin(), rating.end(), diff[i]) - rating.begin()) + 1;
        
    }
 
    sort(rank.begin(), rank.end());
 
    for (int k = 1; k <= m; k++)
    {
        int finalrank = 0;
        for (int i = k - 1; i < m; i += k) finalrank += rank[i];
 
        cout << finalrank << " ";
    }
}
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chita nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
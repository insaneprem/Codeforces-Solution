#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<pair<int, int>> one, two, three;
 
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
 
        if (val == 1)
            one.push_back({val, i});
        else if (val == 2)
            two.push_back({val, i});
        else
            three.push_back({val, i});
    }
 
    int size = min({(int)one.size(), (int)two.size(), (int)three.size()});
 
    cout << size << "
";
    for (int i = 0; i < size; i++)
    {
        cout << one[i].second << " " << two[i].second << " " << three[i].second <<"
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
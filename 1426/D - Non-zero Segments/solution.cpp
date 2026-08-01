#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> prefix(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> prefix[i];
 
    partial_sum(begin(prefix), end(prefix), begin(prefix));
 
    set<int> st;
    int change = 0;
    for (int i = 0; i <= n; i++)
    {
        if (!st.insert(prefix[i]).second)
        {
            change++;
            st.clear();
            st.insert(prefix[i]);
            st.insert(prefix[i - 1]);
        }
    }
 
    cout << change;
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
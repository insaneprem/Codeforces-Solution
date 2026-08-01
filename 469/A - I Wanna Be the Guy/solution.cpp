#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    set<int> st;
 
    for (int i = 0; i < 2; i++)
    {
        int p;
        cin >> p;
 
        for (int j = 0; j < p; j++)
        {
            int val;
            cin >> val;
            st.insert(val);
        }
    }
 
    if (st.size() == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
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
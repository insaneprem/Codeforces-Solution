#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string tomatch;
    cin >> tomatch;
    int sz = tomatch.size();
 
    int n;
    cin >> n;
 
    set<string> st;
 
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
 
        if (str.substr(0, sz) == tomatch)
            st.insert(str);
    }
 
    if (st.empty())
        cout << tomatch;
    else
        cout << *st.begin();
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    set<int> st;
    while (n--)
    {
        int val;
        cin >> val;
        st.insert(val);
    }
 
    if (st.size() <= 2)
        cout << "YES";
    else if (st.size() == 3)
    {
        vector<int> vec(st.begin(),st.end());
 
        if (vec[2] - vec[1] == vec[1] - vec[0])
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    set<int> st;
    st.insert({4, 7, 44, 47, 77, 74, 444, 447, 474, 477, 744, 747, 774, 777});
 
    for (auto i : st)
    {
        if (n % i == 0)
        {
            cout << "YES";
            return;
        }
    }
 
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
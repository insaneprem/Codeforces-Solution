#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string s;
    cin >> s;
 
    int n = s.size();
    bool ab = false, ba = false;
    for (int i = 0; i + 1 < n; i++)
    {
        if (s.substr(i, 2) == "BA" && !ba)
        {
            ba = true;
            i++;
        }
        else if (s.substr(i, 2) == "AB" && ba)
        {
            cout << "YES";
            return;
        }
    }
 
    ab = false, ba = false;
    for (int i = 0; i + 1 < n; i++)
    {
        if (s.substr(i, 2) == "AB" && !ab)
        {
            ab = true;
            i++;
        }
        else if (s.substr(i, 2) == "BA" && ab)
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
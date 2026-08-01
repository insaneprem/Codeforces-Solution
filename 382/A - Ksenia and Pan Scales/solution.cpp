#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str, str2;
    cin >> str >> str2;
 
    string a = "", b = "";
 
    bool seen = false;
    for (auto i : str)
    {
        if (i == '|')
        {
            seen = 1;
            continue;
        }
 
        if (seen)
            b += i;
        else
            a += i;
    }
 
    int idx = 0, n = str2.size();
 
    while (idx < n)
    {
        if (a.size() < b.size())
            a += str2[idx];
        else
            b += str2[idx];
 
        idx++;
    }
 
    if (a.size() != b.size())
        cout << "Impossible";
    else
        cout << a << '|' << b;
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
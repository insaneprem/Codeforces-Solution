#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    char ch;
    cin >> ch;
 
    string given;
    cin >> given;
 
    string str = "qwertyuiopasdfghjkl;zxcvbnm,./";
 
    map<char, char> left, right;
 
    for (int i = 0; i < str.size(); i++)
    {
        if (i > 0)
            left[str[i]] = str[i - 1];
        if (i < str.size() - 1)
            right[str[i]] = str[i + 1];
    }
 
    for (auto i : given)
    {
        if (ch == 'L')
        {
            cout << right[i];
        }
        else
            cout << left[i];
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
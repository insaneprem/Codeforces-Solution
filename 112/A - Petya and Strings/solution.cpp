#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
 
    for (int i = 0; i < str1.size(); i++)
    {
        char ch1 = tolower(str1[i]) - 'a';
        char ch2 = tolower(str2[i]) - 'a';
 
        if (ch1 < ch2)
        {
            cout << -1;
            return;
        }
        else if (ch2 < ch1)
        {
            cout << 1;
            return;
        }
    }
 
    cout << 0;
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
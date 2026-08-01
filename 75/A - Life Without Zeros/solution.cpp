#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str1, str2;
    cin >> str1 >> str2;
 
    string first = "", second = "";
    for (auto i : str1)
    {
        if (i != '0')
            first += i;
    }
    for (auto i : str2)
    {
        if (i != '0')
            second += i;
    }
 
    string matchval = "";
 
    int sum = stoi(str1) + stoi(str2);
    string temp = to_string(sum);
    for (auto i : temp)
    {
        if (i != '0')
            matchval += i;
    }
 
    if (stoi(first) + stoi(second) == stoi(matchval))
        cout << "YES";
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
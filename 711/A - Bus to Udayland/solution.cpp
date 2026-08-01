#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<string> arr;
 
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
 
        if (!flag)
        {
 
            if ((str[0] == 'O' && str[1] == 'O'))
            {
                flag = 1;
                str[0] = '+';
                str[1] = '+';
            }
            else if ((str[3] == 'O' && str[4] == 'O'))
            {
                flag = 1;
                str[3] = '+';
                str[4] = '+';
            }
        }
 
        arr.push_back(str);
    }
 
    if (flag)
    {
        cout << "YES" << "
";
        for (auto i : arr)
            cout << i << "
";
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
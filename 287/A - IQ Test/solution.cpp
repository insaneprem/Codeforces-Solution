#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    vector<vector<char>> vec(4, vector<char>(4));
 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> vec[i][j];
        }
    }
 
    bool flag = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            int white = 0, black = 0;
 
            if (i + 1 < 4)
                (vec[i + 1][j] == '#') ? black++ : white++;
            if (j + 1 < 4)
                (vec[i][j + 1] == '#') ? black++ : white++;
            if (i + 1 < 4 && j + 1 < 4)
                (vec[i + 1][j + 1] == '#') ? black++ : white++;
            (vec[i][j] == '#') ? black++ : white++;
 
            if (white >= 3 || black >= 3)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
            break;
    }
 
    cout << (flag ? "YES" : "NO");
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
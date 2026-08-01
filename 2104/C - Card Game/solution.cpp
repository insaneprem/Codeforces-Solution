#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(int a, int b, int n)
{
    return (b == 1 && a == n) || (b > a && !(b == n && a == 1));
}
 
void solve()
{
    int n;
    string s;
    cin >> n >> s;
 
    vector<int> a, b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a.push_back(i + 1);
        else
            b.push_back(i + 1);
    }
 
    bool flag = 0;
 
    for (auto x : a)
    {
        bool issafe = true;
 
        for (auto y : b)
            if (check(x, y, n))
            {
                issafe = false;
                break;
            }
 
        if (issafe)
        {
            flag = true;
            break;
        }
    }
 
    cout << (flag ? "Alice" : "Bob");
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
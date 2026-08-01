#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    string str;
    cin >> n >> str;
 
    int cnt01 = 0, cnt10 = 0;
    char prev = '0';
 
    for (auto ch : str)
    {
        if (prev == '0' && ch == '1') cnt01++;
        else if (prev == '1' && ch == '0') cnt10++;
 
        prev = ch;
    }
 
    int val = 0;
 
    if (cnt01 >= 2 || cnt10 >= 2) val = 2;
    else if (cnt01 >= 1 && cnt10 >= 1) val = 1;
    
    cout << n + cnt01 + cnt10 - val;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
int findcnt(int num)
{
    if (num < 10)
        return num;
 
    string s = to_string(num);
    int sz = s.length();
    int ans = 9;
 
    int val = 1;
    for (int i = 2; i < sz; i++)
    {
        ans += 9 * val;
        val *= 10;
    }
 
    int firstdig = s[0] - '0';
    int lastdig = s.back() - '0';
 
    ans += (firstdig - 1) * val;
 
    int middle = 0;
    if (sz > 2)
        middle = stoll(s.substr(1, sz - 2));
    
    ans += middle;
    if (firstdig <= lastdig) ans ++;
    
    return ans;
}
void solve()
{
 
    int l, r;
    cin >> l >> r;
 
    cout << findcnt(r) - findcnt(l - 1);
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
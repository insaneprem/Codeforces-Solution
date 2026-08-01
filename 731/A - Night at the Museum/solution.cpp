#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    int ans = 0;
    char curr = 'a';
    for (auto i : str)
    {
        char to_move = i;
 
        ans += min(((curr - 'a') - (to_move - 'a') + 26) % 26, ((to_move - 'a') - (curr - 'a') + 26) % 26);
        curr = i;
    }
 
    cout << ans;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    char ch = *max_element(begin(str), end(str));
 
    int freq = count(begin(str), end(str), ch);
 
    cout << string(freq, ch);
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
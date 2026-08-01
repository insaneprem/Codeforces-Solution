#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int a = 0, d = 0;
 
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
 
        if (ch == 'A')
            a++;
        else
            d++;
    }
 
    if (a == d)
        cout << "Friendship";
    else if (a > d)
        cout << "Anton";
    else
        cout << "Danik";
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
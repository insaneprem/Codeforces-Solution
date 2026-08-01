#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    if (n >= 0)
        cout << n;
    else if (n == -10)
        cout << 0;
    else
    {
        n*=-1;
        int lastdigit = n % 10;
        n /= 10;
        int secondlast = n % 10;
        
        // cout<<lastdigit<<"
";
        if (lastdigit >= secondlast)
        {
        }
        else
        {
            n /= 10;
            n = n * 10 + lastdigit;
        }
        
        n*=-1;
        cout << n;
    }
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
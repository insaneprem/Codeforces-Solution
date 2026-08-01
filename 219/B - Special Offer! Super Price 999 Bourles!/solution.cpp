#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, d;
    cin >> n >> d;
 
    int num = n + 1;
    int best = num;
    int place = 10;
 
    while (true)
    {
        int drop = num % place;
 
        if (drop > d)
            break;
 
        best = num - drop;
 
        if (place > n)
            break;
 
        place *= 10;
    }
 
    cout << best - 1;
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
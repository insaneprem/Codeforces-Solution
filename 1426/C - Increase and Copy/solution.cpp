#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int best = 1 << 17;
 
    int S = sqrt(n);
 
    for (int i = max(0LL, S - 1); i <= S + 1; i++)
        for (int j = max(0LL, S - 1); j <= S + 1; j++)
            if (i * j >= n)
                best = min(best, i + j - 2);
 
    cout << best;
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
    cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
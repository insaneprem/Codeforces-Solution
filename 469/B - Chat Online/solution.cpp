#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
typedef pair<int, int> P;
void solve()
{
    int p, q, l, r;
    cin >> p >> q >> l >> r;
 
    vector<P> pvec(p), qvec(q);
 
    for (auto &[a, b] : pvec)
        cin >> a >> b;
    for (auto &[c, d] : qvec)
        cin >> c >> d;
 
    int ans = 0;
    for (int t = l; t <= r; t++)
    {
        bool flag = false;
        for (auto [c, d] : qvec)
        {
            c = c + t;
            d = d + t;
 
            for (auto [a, b] : pvec)
            {
                if (a <= d && c <= b)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        ans += flag;
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
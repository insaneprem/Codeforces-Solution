#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    int reqb = 0, reqs = 0, reqc = 0;
    for (auto i : str)
    {
        if (i == 'B')
            reqb++;
        else if (i == 'S')
            reqs++;
        else
            reqc++;
    }
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
 
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
 
    int money;
    cin >> money;
 
    int l = 0, r = 1e14;
 
    while (l <= r)
    {
        int mid = (l + r) / 2;
 
        int needb = max(0LL, (mid * reqb) - nb);
        int needs = max(0LL, (mid * reqs) - ns);
        int needc = max(0LL, (mid * reqc) - nc);
 
        int cost = 0;
        cost += pb * needb;
        cost += ps * needs;
        cost += pc * needc;
 
        if (cost <= money)
            l = mid + 1;
        else
            r = mid - 1;
    }
 
    cout << r;
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
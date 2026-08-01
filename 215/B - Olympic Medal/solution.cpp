#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, m, k;
 
    cin >> n;
    vector<ld> r1(n);
    for (auto &i : r1)
        cin >> i;
    cin >> m;
    vector<ld> p1(m);
 
    for (auto &i : p1)
        cin >> i;
    cin>>k;
    vector<ld> p2(k);
    for (auto &i : p2)
        cin >> i;
 
    ld A, B;
    cin >> A >> B;
    ld bestr1 = *max_element(begin(r1), end(r1));
    
    ld ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < k; j++)
        {
            ld numo = p1[i] * B * bestr1 * bestr1;
            ld demo = p1[i] * B + p2[j] * A;
            ld val = sqrt(numo / demo);
            ans = max(ans, val);
        }
    }
 
    cout << fixed << setprecision(9) << ans;
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
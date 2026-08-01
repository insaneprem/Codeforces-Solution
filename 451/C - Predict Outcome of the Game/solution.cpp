#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(int n, int k, int d1, int d2)
{
    if (n % 3 != 0)
    {
        return false;
    }
 
    for (int sign1 = -1; sign1 <= 1; sign1++)
    {
        for (int sign2 = -1; sign2 <= 1; sign2++)
        {
            if (sign1 == 0 || sign2 == 0)
                continue;
 
            int D1 = sign1 * d1;
            int D2 = sign2 * d2;
 
            int x2 = (D2 - D1 + k);
 
            if (x2 % 3 != 0)
                continue;
 
            x2 /= 3;
 
            int x1 = D1 + x2;
            int x3 = x2 - D2;
 
            if (x1 >= 0 && x1 <= k && x2 >= 0 && x2 <= k && x3 >= 0 && x3 <= k && x1 <= n / 3 && x2 <= n / 3 && x3 <= n / 3)
            {
                return true;
            }
        }
    }
 
    return false;
}
void solve()
{
    int n, k, d1, d2;
    cin >> n >> k >> d1 >> d2;
 
    cout << (check(n, k, d1, d2) ? "yes" : "no");
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool isprime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
 
    return true;
}
void solve()
{
    int n;
    cin >> n;
    if (n < 3)
    {
        for (int i = 1; i <= n; i++) cout << i << " ";
        return;
    }
 
    int m = n / 3, z = 1 + (m + 1) / 2;
    while (z <= n - (m - 1) / 2 && !isprime(z)) z++;
 
    vector<bool> used(n + 1, 0);
    for (int i = 1; i <= m; i++)
    {
        int val = (i % 2) ? z + (i - 1) / 2 : z - i / 2;
        if (val >= 1 && val <= n)
            cout << val << " ", used[val] = 1;
    }
 
    for (int i = 1; i <= n; i++) if (!used[i]) cout << i << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
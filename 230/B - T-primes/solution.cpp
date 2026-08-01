#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool isprime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || (n % (i + 2) == 0))
            return false;
    }
 
    return true;
}
bool Tprime(int n)
{
    int root = sqrtl(n);
    return (root * root == n && isprime(root));
}
void solve()
{
    int n;
    cin >> n;
 
    vector<string> arr;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        cout << (Tprime(val) ? "YES" : "NO") << "
";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD = 1e9 + 7;
 
inline int modexp(int base, int exp)
{
    base %= MOD;
 
    int ans = 1;
    while (exp)
    {
        if (exp & 1)
            ans = (ans * base) % MOD;
 
        base = (base * base) % MOD;
        exp >>= 1;
    }
 
    return ans;
}
vector<int> primefact(int n)
{
 
    vector<int> fact;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.push_back(i);
            while (n % i == 0)
                n /= i;
        }
    }
 
    if (n > 1)
        fact.push_back(n);
    return fact;
}
void solve()
{
    int x, n;
    cin >> x >> n;
 
    vector<int> primes = primefact(x);
 
    map<int, int> mp;
 
    for (auto &p : primes)
    {
        int val = p;
 
        int occ = 0;
        while (val <= n)
        {
            occ += n / val;
            if (val > n / p)
                break;
            val *= p;
        }
 
        mp[p] = occ;
    }
 
    int ans = 1;
 
    for (auto [base, exp] : mp)
    {
        ans = (ans * modexp(base, exp)) % MOD;
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
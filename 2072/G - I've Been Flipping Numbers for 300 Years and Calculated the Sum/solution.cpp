#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define ld long double
const int MOD = 1000000007;
 
int inv2, inv6;
 
int mod_mul(int a, int b, int m)
{
    return ((a % m) * (b % m)) % m;
}
 
int mod_exp(int a, int b, int m)
{
    if (b == 0)
        return 1;
    int res = mod_exp(a, b / 2, m);
    res = mod_mul(res, res, m);
    if (b & 1)
        res = mod_mul(res, a, m);
    return res;
}
 
int root(int n, int exp)
{
    int l = 1, r = n, ans = 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int val = 1;
        bool ok = true;
        for (int i = 0; i < exp; i++)
        {
            val *= mid;
            if (val > n)
            {
                ok = false;
                break;
            }
        }
        if (ok && val <= n)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
 
int rangesum(int L, int R)
{
    int right = mod_mul(R % MOD, (R + 1) % MOD, MOD);
    int left = mod_mul((L - 1) % MOD, L % MOD, MOD);
    int diff = ((right - left) % MOD + MOD) % MOD;
    return mod_mul(diff, inv2, MOD);
}
 
int rangesumsq(int L, int R)
{
    auto fun = [&](int x) -> int
    {
        return mod_mul(mod_mul(x % MOD, (x + 1) % MOD, MOD), (2 * x + 1) % MOD, MOD);
    };
    int diff = ((fun(R) - fun(L - 1)) % MOD + MOD) % MOD;
    return mod_mul(diff, inv6, MOD);
}
 
int revnp(int n, int p)
{
    int res = 0, temp = n;
    while (temp > 0)
    {
        int d = temp % p;
        res = ((res * p) % MOD + d) % MOD;
        temp /= p;
    }
    return res;
}
 
void solve()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
 
    inv2 = mod_exp(2, MOD - 2, MOD);
    inv6 = mod_exp(6, MOD - 2, MOD);
 
    if (n == 1)
    {
        int cnt = (k - 1) % MOD;
        cout << cnt % MOD;
        return;
    }
 
    int maxi = min(n, k);
 
    for (int L = 2;; L++)
    {
        int low = root(n, L) + 1;
        int high = root(n, L - 1);
        if (high < 2)
            break;
        if (low > high)
            continue;
 
        int A = max(low, 2LL);
        int B = min(high, maxi);
        if (A > B)
            continue;
 
        if (L == 2)
        {
            int val = A;
            while (val <= B)
            {
                int d = n / val;
                int r = min(B, (int)(n / d));
                int s1 = rangesum(val, r);
                int s2 = rangesumsq(val, r);
                int cnt = (r - val + 1) % MOD;
 
                int term = (mod_mul(n % MOD, s1, MOD) - mod_mul(d % MOD, ((s2 - cnt) % MOD + MOD) % MOD, MOD)) % MOD;
                if (term < 0)
                    term += MOD;
                ans = (ans + term) % MOD;
 
                val = r + 1;
            }
        }
        else
        {
 
            for (int i = A; i <= B; i++)
            {
                ans = (ans + revnp(n, i)) % MOD;
            }
        }
    }
 
    if (k > maxi)
    {
        int cnt = (k - maxi) % MOD;
        ans = (ans + mod_mul(n % MOD, cnt, MOD)) % MOD;
    }
 
    cout << ans % MOD;
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
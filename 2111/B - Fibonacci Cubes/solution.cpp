#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
int f[11];
vector<vector<int>> base(151);
 
bool check(vector<int> &bases, int W, int L)
{
    int k = bases.size();
    vector<int> dp(1 << k, 1e9);
    vector<int> sum(1 << k), mx(1 << k);
    dp[0] = 0;
    for (int mask = 1; mask <= (1 << k) - 1; mask++)
    {
        int lb = __builtin_ctzll(mask);
        int val = mask ^ (1LL << lb);
        sum[mask] = sum[val] + bases[lb];
        mx[mask] = max(mx[val], bases[lb]);
    }
    for (int mask = 1; mask <= (1 << k) - 1; mask++)
    {
        for (int sub = mask; sub; sub = (sub - 1) & mask)
        {
            if (sum[sub] <= W)
                dp[mask] = min(dp[mask], dp[mask ^ sub] + mx[sub]);
        }
    }
    return dp[(1 << k) - 1] <= L;
}
 
void solve()
{
    int n, m;
    cin >> n >> m;
 
    f[1] = 1;
    f[2] = 2;
    for (int i = 3; i <= n; ++i)
        f[i] = f[i - 1] + f[i - 2];
 
    int maxf = f[n];
    for (int H = maxf; H <= 150; H++)
    {
        vector<pair<int, int>> vec;
        base[H].clear();
 
        for (int i = n; i >= 1; i--)
        {
            int s = f[i], j = -1, curr_max = -1;
            for (int k = 0; k < vec.size(); k++)
            {
                if (vec[k].first + s <= H && vec[k].first > curr_max)
                {
                    j = k;
                    curr_max = vec[k].first;
                }
            }
 
            if (j != -1)
                vec[j].first += s;
            else
                vec.push_back({s, s});
        }
 
        for (auto &i : vec)
            base[H].push_back(i.second);
    }
 
    string ans = "";
    while (m--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int dim[3] = {a, b, c};
        bool flag = false;
        for (int i = 0; i < 3 && !flag; i++)
        {
            int H = dim[i], W = dim[(i + 1) % 3], L = dim[(i + 2) % 3];
            if (H < maxf)
                continue;
 
            if (check(base[H], W, L) || check(base[H], L, W))
                flag = true;
        }
        ans += flag ? '1' : '0';
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
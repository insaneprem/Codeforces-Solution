#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> primes;
void fill()
{
    vector<bool> isprime(200005, 1);
    isprime[0] = 0, isprime[1] = 0;
 
    for (int i = 2; i * i <= 200005; i++)
    {
        if (isprime[i])
        {
            for (int j = i * i; j <= 200005; j += i)
                isprime[j] = false;
        }
    }
 
    for (int i = 2; i <= 200005; i++)
    {
        if (isprime[i])
            primes.push_back(i);
    }
}
void solve()
{
    fill();
    int n, m;
    cin >> n >> m;
 
    vector<vector<int>> grid(n, vector<int>(m));
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            grid[i][j] = *lower_bound(begin(primes), end(primes), grid[i][j]) - grid[i][j];
        }
    }
 
    int ans = 1e18;
 
    for (auto row : grid)
    {
        int sum = accumulate(begin(row), end(row), 0LL);
        ans = min(ans, sum);
    }
 
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += grid[i][j];
        }
        ans = min(ans, sum);
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool isprime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || (n % (i + 2)) == 0)
            return false;
    }
 
    return true;
}
void solve()
{
    int n;
    cin >> n;
 
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            for (int j = i; j <= n; j *= i)
                ans.push_back(j);
        }
    }
 
    cout << ans.size() << "
";
 
    for (auto i : ans)
        cout << i << " ";
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
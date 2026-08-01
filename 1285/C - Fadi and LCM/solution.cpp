#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
vector<int> getFact(int n)
{
    vector<int> fact;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.push_back(i);
            if (n / i != i)
                fact.push_back(n / i);
        }
    }
 
    sort(begin(fact), end(fact));
    return fact;
}
void solve()
{
    int n;
    cin >> n;
 
    pair<int, int> ans = {n, n};
 
    vector<int> fact = getFact(n);
    int sz = fact.size();
    for (int i = 0; i < sz / 2; i++)
    {
        if (__gcd(fact[i], fact[sz - i - 1]) == 1)
        {
            ans.first = fact[i];
            ans.second = fact[sz - i - 1];
        }
    }
 
    cout << ans.first << " " << ans.second;
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
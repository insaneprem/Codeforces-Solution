#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(int n)
{
    map<int, int> mp;
 
    while (n)
    {
        mp[n % 10]++;
        n /= 10;
    }
 
    return (mp.size() == 4);
}
void solve()
{
    int n;
    cin >> n;
 
    for (int i = n + 1;; i++)
    {
        if (check(i))
        {
            cout << i;
            break;
        }
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
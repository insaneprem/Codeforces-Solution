#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> prefix(n), suffix(n), arr(n);
 
    for (auto &i : prefix)
        cin >> i;
    for (auto &i : suffix)
        cin >> i;
 
    for (int i = 0; i < n; i++)
        arr[i] = lcm(suffix[i], prefix[i]);
 
    vector<int> arrpre(n), arrsuf(n);
    arrpre[0] = arr[0];
 
    for (int i = 1; i < n; i++)
        arrpre[i] = gcd(arrpre[i - 1], arr[i]);
 
    arrsuf[n - 1] = arr[n - 1];
 
    for (int i = n - 2; i >= 0; i--)
        arrsuf[i] = gcd(arrsuf[i + 1], arr[i]);
 
    // for(auto i:arrpre) cout<<i<<" ";
    // cout<<endl;
    // for(auto i:arrsuf) cout<<i<<" ";
    // cout<<endl;
 
    if (arrpre != prefix || arrsuf != suffix)
        cout << "NO";
    else
        cout << "YES";
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
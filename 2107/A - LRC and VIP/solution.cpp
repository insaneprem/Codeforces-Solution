#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int g = arr[0];
    for (int i = 1; i < n; i++)
        g = gcd(g, arr[i]);
 
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
 
        if (arr[i] != g)
        {
            idx = i;
            break;
        }
    }
 
    if (idx == -1)
    {
        cout << "No";
        return;
    }
 
    cout << "Yes
";
    for (int i = 0; i < n; i++){
        cout << (i == idx ? 1 : 2) << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
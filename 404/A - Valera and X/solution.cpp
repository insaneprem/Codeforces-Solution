#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    char arr[n][n];
    set<int> digonal, rest;
 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
 
            if (i == j || (j == n - i - 1))
                digonal.insert(arr[i][j]);
            else
                rest.insert(arr[i][j]);
        }
    }
 
    if (digonal.size() == 1 && rest.size() == 1 && *digonal.begin() != *rest.begin())
        cout << "YES";
    else
        cout << "NO";
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
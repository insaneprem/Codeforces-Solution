#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(vector<ld> &arr, ld dist, int r)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        ld right = arr[i] + dist;
        ld left = arr[i + 1] - dist;
 
        if (right < left)
            return 0;
    }
 
    return (arr[0] - dist <= 0 && arr.back() + dist >= r);
}
void solve()
{
    int n, len;
    cin >> n >> len;
 
    vector<ld> arr(n);
    for (auto &i : arr)
        cin >> i;
    
    sort(begin(arr),end(arr));
 
    ld l = 0, r = len;
 
    for (int i = 0; i < 100; i++)
    {
        ld mid = (l + r) / 2;
 
        if (check(arr, mid, len))
            r = mid;
        else
            l = mid;
    }
 
    cout << fixed << setprecision(10) << r;
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
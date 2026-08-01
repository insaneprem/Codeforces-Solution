#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int s, e, n, d;
    cin >> s >> e >> n >> d;
 
    vector<int> arr(n, 0);
 
    arr[0] = s;
    arr.back() = e;
 
    int diff = s - e;
 
    for (int i = 1; i < n; i++)
    {
        int limit = (n - 1 - i) * d;
        diff += d;
 
        if (diff > limit)
        {
            arr[i] = arr[i - 1] + d - (diff - limit);
            for (int j = i + 1; j < n; j++)
                arr[j] = arr[j - 1] - d;
            break;
        }
        else
        {
            arr[i] = arr[i - 1] + d;
        }
    }
 
    int sum = 0;
    for (auto i : arr)
        sum += i;
 
    cout << sum;
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
typedef pair<int, int> P;
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
 
    for (auto &i : arr)
        cin >> i;
 
    partial_sum(begin(arr), end(arr), begin(arr));
    string str;
    cin >> str;
 
    int ans = 0;
    int curr = 0;
 
    for (int i = n - 1; i >= 0; i--)
    {
        if (str[i] == '1')
        {
            if (i > 0)
                ans = max(ans, curr + arr[i - 1]);
 
            curr += arr[i] - (i > 0 ? arr[i - 1] : 0);
        }
    }
 
    cout << max(ans, curr);
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
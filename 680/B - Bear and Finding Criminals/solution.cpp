#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, a;
    cin >> n >> a;
    a--;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int i = a - 1, j = a + 1;
 
    int ans = arr[a] == 1;
    while (i >= 0 || j < n)
    {
        while (i >= 0 && j < n)
        {
            if(arr[i] == 1 && arr[j] == 1){
            ans += 2;
            }
            i--;
            j++;
        }
 
        if (i >= 0)
            ans += arr[i] == 1, i--;
        if (j < n)
            ans += arr[j] == 1, j++;
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
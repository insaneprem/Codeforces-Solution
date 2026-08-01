#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(10, 0);
 
    int ans = 0;
    while (n--)
    {
        int num;
        cin >> num;
        bool flag = 1;
 
        while (num)
        {
            int digit = num % 10;
            arr[digit]++;
            num /= 10;
        }
 
        for (int i = 0; i <= k; i++)
            flag &= (arr[i] > 0);
 
        if (flag)
            ans++;
 
        arr.assign(10, 0);
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
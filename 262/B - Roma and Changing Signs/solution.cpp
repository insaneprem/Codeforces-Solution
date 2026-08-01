#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    sort(begin(arr), end(arr));
 
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
            break;
 
        int num = arr[i];
 
        if (num < 0)
        {
            arr[i] *= -1LL;
            k--;
        }
        else
        {
            if (k % 2 == 1)
            {
                if (i > 0 && arr[i - 1] < arr[i])
                    arr[i - 1] *= -1LL;
                else
                    arr[i] *= -1LL;
                k = 0;
            }
            break;
        }
    }
 
    if (k % 2)
        arr.back() *= -1LL;
 
    cout << accumulate(begin(arr), end(arr), 0LL);
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
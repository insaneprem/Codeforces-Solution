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
 
    int mini = *min_element(begin(arr), end(arr));
    int maxi = *max_element(begin(arr), end(arr));
    int sum = accumulate(begin(arr), end(arr), 0LL);
 
    int cnt = count(begin(arr), end(arr), maxi);
 
    if ((maxi - mini) > k + 1 || ((maxi - mini == k + 1) && cnt > 1))
    {
        cout << "Jerry";
        return;
    }
 
    cout << (sum % 2 == 1 ? "Tom" : "Jerry");
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n;
    cin >> n;
 
    vector<int> brr(2 * n);
    for (auto &i : brr) cin >> i;
 
    sort(brr.begin(), brr.end());
 
    if (n == 1)
    {
        cout << brr[0] << " " << brr[0] + brr[1] << " " << brr[1];
        return;
    }
 
    vector<int> arr;
    int left = 1, right = 2 * n - 1;
    bool flag = true;
    while (left <= right)
    {   
        arr.push_back(flag ? brr[right--] : brr[left++]);
 
        flag = !flag;
    }
 
    int val = brr[0];
    for (int i = 0; i < arr.size(); i++) val+=(i % 2 == 0) ? arr[i] : (-1 * arr[i]);
    
    cout << brr[0] << " " << val << " ";
 
    for (auto &i : arr)
        cout << i << " ";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n, k;
    cin >> n >> k;
 
    string str;
    cin >> str;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
    int left = 0, right = *max_element(arr.begin(), arr.end());
 
    while (left < right)
    {
        int mid = left + (right - left) / 2;
 
        int op = 0;
        int i = 0;
 
        while (i < n)
        {
            if (str[i] == 'B' && arr[i] > mid)
            {
                op++;
                while (i < n && (str[i] == 'B' || arr[i] <= mid)) i++;
            }
            else
            {
                i++;
            }
        }
 
        if (op <= k)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
 
    cout << left;
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
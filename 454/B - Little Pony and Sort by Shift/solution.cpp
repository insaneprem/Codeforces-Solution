#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
 
    for (auto &i : arr)
        cin >> i;
 
    vector<int> vec;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            vec = vector<int>(begin(arr) + i, end(arr));
           vec.insert(vec.end(), arr.begin(), arr.begin() + i);
 
            if (is_sorted(begin(vec), end(vec)))
            {
                cout << n - i;
            }
            else
                cout << -1;
            return;
        }
    }
 
    cout<<0;
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
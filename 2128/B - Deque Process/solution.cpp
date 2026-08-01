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
 
    int l = 0, r = n - 1;
 
    bool mini = true;
 
    while (l <= r)
    {
        if (mini)
        {
            if (arr[l] <= arr[r])
                cout << 'L', l++;
            else
                cout << 'R', r--;
        }
        else
        {
            if (arr[l] >= arr[r])
                cout << 'L', l++;
            else
                cout << 'R', r--;
        }
 
        mini = !mini;
    }
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
    cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
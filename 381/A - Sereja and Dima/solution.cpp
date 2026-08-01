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
 
    int sereja = 0, dima = 0;
    bool issereja = 1;
    while (l <= r)
    {
        if (arr[l] > arr[r])
        {
            if (issereja)
                sereja += arr[l];
            else
                dima += arr[l];
            l++;
        }
        else
        {
            if (issereja)
                sereja += arr[r];
            else
                dima += arr[r];
            r--;
        }
 
        issereja = !issereja;
    }
 
    cout << sereja << " " << dima;
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
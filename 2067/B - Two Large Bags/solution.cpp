#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    for(auto &i:arr) cin>>i;
    int fsize = n + n / 2 + 10;
    vector<int> freq(fsize, 0);
 
    for (auto x : arr)
    {
        if (x < fsize)
            freq[x]++;
    }
 
    bool flag = true;
    int carry = 0;
    for (int i = 1; i < fsize; i++)
    {
        int total = freq[i] + carry;
        if (total == 1)
        {
            flag = false;
            break;
        }
        if (total >= 2)
            carry = total - 2;
        else
            carry = 0;
    }
 
    cout << (flag ? "YES" : "NO") << "
";
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
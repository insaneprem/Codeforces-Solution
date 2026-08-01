#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    int currbits = __builtin_popcount(n);
 
    if (k < currbits || k > n)
    {
        cout << "NO";
        return;
    }
 
    cout << "YES
";
 
    vector<int> bits(32, 0);
 
    for (int i = 0; i < 32; i++)
    {
        if (n & (1 << i))
            bits[i]++;
    }
 
    for (int i = 31; i >= 1; i--)
    {
        if (bits[i] > 0)
        {
 
            int transfer = min(k - currbits, bits[i]);
            if (transfer == 0)
                break;
 
            currbits = currbits + transfer;
            bits[i - 1] += 2 * transfer;
            bits[i] -= transfer;
        }
    }
 
    // for(auto i:bits) cout<<i<<" ";
    // cout<<endl;
 
    for (int i = 0; i < 31; i++)
    {
        int num = (1 << i);
 
        for (int j = 0; j < bits[i]; j++)
        {
            cout << num << " ";
        }
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
    // cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
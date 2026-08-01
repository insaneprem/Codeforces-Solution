#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int a, b;
    cin >> a >> b;
 
    vector<int> arr;
 
    int maxi = max(a, b);
    int mini = min(a, b);
    for (int i = 1; i * i <= maxi; i++)
    {
        if (i > mini)
            break;
 
        int second = maxi / i;
        if ((a % i == 0) && (b % i == 0))
            arr.push_back(i);
        
        if(second != i && (a % second == 0) && (b % second == 0)) arr.push_back(second);
    }
    
    sort(begin(arr),end(arr));
 
    int q;
    cin >> q;
 
    // for (auto i : arr)
    //     cout << i << " ";
    // cout << endl;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
 
        auto it = upper_bound(arr.begin(), arr.end(), r);
        if (it == arr.begin())
        {
            cout << "-1
";
        }
        else
        {
            it--;
            int val = *it;
            if (val >= l && val <= r)
            {
                cout << val << "
";
            }
            else
                cout << "-1
";
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
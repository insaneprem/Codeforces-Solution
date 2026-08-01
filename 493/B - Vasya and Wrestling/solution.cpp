#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> a, b;
    int suma = 0, sumb = 0;
    int last;
    while (n--)
    {
        int val;
        cin >> val;
 
        if (val >= 0)
        {
            suma += val;
            a.push_back(val);
        }
        else
        {
            b.push_back(val * -1);
            sumb += val * -1;
        }
        if (n == 0)
            last = val;
    }
 
    if (suma == sumb)
    {
        int idx = 0;
        while (idx < min((int)a.size(), (int)b.size()))
        {
            if (a[idx] < b[idx])
            {
                cout << "second";
                return;
            }
            else if (b[idx] < a[idx])
            {
                cout << "first";
                return;
            }
            idx++;
        }
        
        cout << ((last < 0) ? "second" : "first");
    }
    else
    {
        cout << ((suma < sumb) ? "second" : "first");
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
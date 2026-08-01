#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int police = 0, crime = 0;
 
    for (int i = 0; i < n; i++)
    {
        int event;
        cin >> event;
 
        if (event != -1)
            police += event;
        else
        {
            if (police)
                police--;
            else
                crime++;
        }
    }
 
    cout << crime;
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
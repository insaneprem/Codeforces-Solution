#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    int rating;
    bool excess = 0;
 
    while (n--)
    {
        cin >> rating;
 
        if (rating % 2 == 0)
            cout << rating / 2;
        else
        {
            if (rating < 0)
            {
                if (excess)
                    cout << (rating - 1) / 2;
                else
                    cout << rating / 2;
            }
            else
            {
                if (excess)
                    cout << rating / 2;
                else
                    cout << (rating + 1) / 2;
            }
 
            excess = !excess;
        }
 
        cout << "
";
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
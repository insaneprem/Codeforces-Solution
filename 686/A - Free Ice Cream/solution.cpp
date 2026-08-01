#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, curricecream;
    cin >> n >> curricecream;
 
    int distress = 0;
 
    while (n--)
    {
        char sign;
        int val;
        cin >> sign >> val;
 
        if (sign == '+')
        {
            curricecream += val;
        }
        else
        {
            if (curricecream < val)
                distress++;
            else
                curricecream -= val;
        }
    }
 
    cout << curricecream << " " << distress;
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
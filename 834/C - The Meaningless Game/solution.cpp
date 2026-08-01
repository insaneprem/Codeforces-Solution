#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool possible(int a, int b) {
    int prod = a * b;
 
    int c = round(cbrtl(prod));
 
    if (c * c * c != prod) return false;
 
    if (a % c == 0 && b % c == 0) {
        return true;
    }
    
    return false;
}
void solve()
{
    int n;
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
 
        cout << (possible(a, b) ? "Yes" : "No") << "
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
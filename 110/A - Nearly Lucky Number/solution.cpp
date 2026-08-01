#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
    int cnt = 0;
 
    for (auto i : str)
    {
        if (i == '4' || i == '7')
            cnt++;
    }
 
    if(cnt == 0){
        cout<<"NO";
        return;
    }
 
    while (cnt)
    {
        if (cnt % 10 != 4 && cnt % 10 != 7)
        {
            cout << "NO";
            return;
        }
        cnt /= 10;
    }
 
    cout << "YES";
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
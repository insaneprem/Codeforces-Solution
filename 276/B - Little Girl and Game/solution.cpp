#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin>>str;
    
    map<char,int> mp;
    
    for(auto i:str) mp[i]++;
    
    int cnt =0;
    for(auto [_,val] : mp) cnt+=val%2;
    
    cout<<((cnt%2 == 1 || cnt == 0) ? "First" : "Second");
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
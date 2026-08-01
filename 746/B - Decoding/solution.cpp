#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    string str;
    cin >> str;
 
    deque<char> dq;
    for (int i = 0; i < n; i++)
    {   
        if(n%2){
 
        if (i % 2 == 1)
            dq.push_front(str[i]);
        else
            dq.push_back(str[i]);
        }
        else{
 
        if (i % 2 == 0)
            dq.push_front(str[i]);
        else
            dq.push_back(str[i]);
        }
    }
 
    for (auto i : dq)
        cout << i;
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
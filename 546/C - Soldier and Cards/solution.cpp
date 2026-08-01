#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    deque<int> p1, p2;
 
    int sz;
    cin >> sz;
 
    for (int i = 0; i < sz; i++)
    {
        int val;
        cin >> val;
        p1.push_back(val);
    }
    cin >> sz;
 
    for (int i = 0; i < sz; i++)
    {
        int val;
        cin >> val;
        p2.push_back(val);
    }
 
    set<pair<deque<int>, deque<int>>> seen;
 
    int steps = 0;
    for (int i = 1;; i++)
    {
        if(p1.size() == 0 || p2.size() == 0) break;
 
        if (seen.find({p1, p2}) != seen.end())
        {
            cout << -1;
            return;
        }
        
        seen.insert({p1,p2});
 
        steps++;
        int p1card = p1.front();
        int p2card = p2.front();
        p1.pop_front();
        p2.pop_front();
 
        if (p1card < p2card)
        {
            p2.push_back(p1card);
            p2.push_back(p2card);
        }
        else{
            p1.push_back(p2card);
            p1.push_back(p1card);
        }
    }
    
    int winner = p1.size() == 0 ? 2 : 1;
    cout<<steps<<" "<<winner;
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
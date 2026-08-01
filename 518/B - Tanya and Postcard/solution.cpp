#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool islower(char ch)
{
    return ch >= 'a' && ch <= 'z';
}
void solve()
{
    string A, B;
    cin >> A >> B;
 
    map<char, int> mp;
 
    for (auto i : B)
        mp[i]++;
 
    int yay = 0, whoops = 0;
    vector<int> visited(A.size(), 0);
    for (int i = 0; i < A.size(); i++)
    {
        char ch = A[i];
 
        if (mp[ch] > 0)
        {
            yay++;
            mp[ch]--;
            visited[i] = true;
        }
 
        if (mp[ch] == 0)
            mp.erase(ch);
    }
 
    for (int i = 0; i < A.size(); i++)
    {
        if (visited[i])
            continue;
 
        char ch = A[i];
 
        if (islower(ch))
        {
            char c = ch - 'a' + 'A';
 
            if (mp[c] > 0)
            {
                whoops++;
                mp[c]--;
            }
        }
        else
        {
            char c = ch - 'A' + 'a';
 
            if (mp[c] > 0)
            {
                whoops++;
                mp[c]--;
            }
        }
    }
 
    cout << yay << " " << whoops;
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
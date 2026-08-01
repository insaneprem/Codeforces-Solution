#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    vector<string> str(3);
    cin >> str[0] >> str[1] >> str[2];
 
    vector<int> votes(3, 0);
 
    for (auto s : str)
    {
        if (s[1] == '>')
            votes[s[0] - 'A']++;
        else
            votes[s[2] - 'A']++;
    }
 
    int xr = 0;
    for (auto i : votes)
    {
        xr ^= i;
    }
 
    if (xr == 3)
    {
        int largest;
 
        if (votes[0] > votes[1] && votes[0] > votes[2])
            largest = 0;
        else if (votes[1] > votes[0] && votes[1] > votes[2])
            largest = 1;
        else
            largest = 2;
 
        int smallest;
 
        if (votes[0] < votes[1] && votes[0] < votes[2])
            smallest = 0;
        else if (votes[1] < votes[0] && votes[1] < votes[2])
            smallest = 1;
        else
            smallest = 2;
 
        int middle;
        if (largest != 0 && smallest != 0)
            middle = 0;
        else if (largest != 1 && smallest != 1)
            middle = 1;
        else
            middle = 2;
 
        cout << char(smallest + 'A') << char(middle + 'A') << char(largest + 'A');
    }
    else
        cout << "Impossible";
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
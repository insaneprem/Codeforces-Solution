#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
typedef pair<int, int> P;
void solve()
{
    string str;
    cin >> str;
    int op;
    cin >> op;
 
    vector<int> freq(26, 0);
    for (auto i : str)
        freq[i - 'a']++;
 
    vector<P> letters;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] > 0)
            letters.push_back({freq[i], i});
    }
 
    sort(begin(letters), end(letters));
 
    vector<bool> removeLetter(26, false);
 
    for (auto [count, ch] : letters)
    {
        if (op >= count)
        {
            op -= count;
            removeLetter[ch] = true;
        }
        else
            break;
    }
 
    int distinct = 0;
    for (int i = 0; i < 26; i++)
    {
        if (!removeLetter[i] && freq[i] > 0)
            distinct++;
    }
 
    cout << distinct << "
";
 
    for (auto c : str)
    {
        if (!removeLetter[c - 'a'])
            cout << c;
    }
    cout << "
";
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
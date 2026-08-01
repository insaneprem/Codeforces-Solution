#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a >> b >> c;
 
    int sz = a.size();
 
    map<char, int> mp1, mp2, mp3;
 
    for (int i = 0; i < sz; i++)
    {
        mp1[a[i]]++;
        mp2[b[i]]++;
        mp3[c[i]]++;
    }
 
    
    int freqa = 0, freqb = 0, freqc = 0;
 
    for (auto i : mp1)
        freqa = max(freqa, i.second);
    for (auto i : mp2)
        freqb = max(freqb, i.second);
    for (auto i : mp3)
        freqc = max(freqc, i.second);
 
    
    int score_a = min(sz, freqa + n);
    int score_b = min(sz, freqb + n);
    int score_c = min(sz, freqc + n);
 
    
    if (freqa == sz && n == 1)
        score_a = sz - 1;
    if (freqb == sz && n == 1)
        score_b = sz - 1;
    if (freqc == sz && n == 1)
        score_c = sz - 1;
 
    
    if (score_a > score_b && score_a > score_c)
        cout << "Kuro";
    else if (score_b > score_a && score_b > score_c)
        cout << "Shiro";
    else if (score_c > score_a && score_c > score_b)
        cout << "Katie";
    else
        cout << "Draw";
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
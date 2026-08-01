#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool isVowel(char ch)
{
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
void solve()
{
    string a, b, c;
    getline(cin,a);
    getline(cin,b);
    getline(cin,c);
 
    int vowelcnta = 0, vowelcntb = 0, vowelcntc = 0;
    for (auto i : a)
    {
        if (isVowel(i))
            vowelcnta++;
    }
    for (auto i : b)
    {
        if (isVowel(i))
            vowelcntb++;
    }
    for (auto i : c)
    {
        if (isVowel(i))
            vowelcntc++;
    }
 
    if (vowelcnta == 5 && vowelcntb == 7 && vowelcntc == 5)
        cout << "YES";
    else
        cout << "NO";
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
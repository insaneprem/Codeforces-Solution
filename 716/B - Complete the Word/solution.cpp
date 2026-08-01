#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    int n = str.size();
    map<char, int> mp;
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        mp[str[i]]++;
 
        if (i >= 25)
        {
            int letters = 0, questions = 0;
            bool valid = true;
            for (auto &[ch, cnt] : mp)
            {
                if (ch == '?') {
                    questions += cnt;
                } else {
                    if (cnt > 1) {
                        valid = false;
                        break;
                    }
                    letters++;
                }
            }
 
            if (valid && letters + questions == 26)
            {
                flag = 1;
                for (int j = i - 25; j <= i; j++)
                {
                    if (str[j] == '?')
                    {
                        for (int k = 0; k < 26; k++)
                        {
                            char ch = k + 'A';
                            if (mp.find(ch) == mp.end())
                            {
                                mp[ch] = 1;
                                str[j] = ch;
                                break;
                            }
                        }
                    }
                }
                break;
            }
 
            char s = str[i - 25];
            mp[s]--;
            if (mp[s] == 0)
                mp.erase(s);
        }
    }
 
    if (!flag)
    {
        cout << -1;
        return;
    }
 
    for (auto &i : str)
    {
        if (i == '?')
            i = 'A';
    }
 
    cout << str;
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
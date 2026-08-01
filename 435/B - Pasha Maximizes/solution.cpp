#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    int k;
    cin >> k;
 
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        if (k == 0)
            break;
        auto maxi = max_element(begin(str) + i, min(str.end(), begin(str) + i + k + 1));
 
        if (*maxi > str[i])
        {
            int idx = maxi - begin(str);
            for (int j = idx; j > i; j--)
                swap(str[j], str[j - 1]);
            k -= idx - i;
        }
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
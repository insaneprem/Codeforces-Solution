#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string str;
    cin >> str;
 
    int sz = str.size();
 
    int n;
    cin >> n;
 
    vector<int> arr(sz + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int idx;
        cin >> idx;
 
        int l = idx - 1, r = sz - l - 1;
 
        arr[l]++;
        arr[r + 1]--;
    }
 
    partial_sum(begin(arr), end(arr), begin(arr));
    // for(auto i:arr) cout<<i<<" ";
    for (int i = 0; i < sz; i++)
    {
        char ch;
        if (arr[i] % 2)
            ch = str[sz - i - 1];
        else
            ch = str[i];
 
        cout << ch;
    }
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
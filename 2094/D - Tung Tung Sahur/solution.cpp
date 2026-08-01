#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    string a, b;
    cin >> a >> b;
 
    vector<pair<int, int>> arr, brr;
 
    int cnt = 1;
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i] != a[i - 1])
        {
            arr.push_back({cnt, (a[i - 1] == 'L' ? 0 : 1)});
            cnt = 1;
        }
        else
            cnt++;
    }
    arr.push_back({cnt, (a.back() == 'L' ? 0 : 1)});
 
    cnt = 1;
    for (int i = 1; i < b.size(); i++)
    {
        if (b[i] != b[i - 1])
        {
            brr.push_back({cnt, (b[i - 1] == 'L' ? 0 : 1)});
            cnt = 1;
        }
        else
            cnt++;
    }
    brr.push_back({cnt, (b.back() == 'L' ? 0 : 1)});
 
    if (arr.size() != brr.size())
    {
        cout << "NO";
        return;
    }
 
    for (int i = 0; i < arr.size(); i++)
    {
 
        if (brr[i].first < arr[i].first || brr[i].first > 2 * arr[i].first || arr[i].second != brr[i].second)
        {
            cout << "NO";
            return;
        }
    }
 
    cout << "YES";
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
typedef pair<int, int> P;
void solve()
{
    int n;
    cin >> n;
 
    vector<vector<int>> arr(n, vector<int>(3));
    vector<P> sx(n), sy(n);
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
        arr[i][2] = i;
        sx[i] = {arr[i][0], i};
        sy[i] = {arr[i][1], i};
    }
 
    sort(begin(sx), end(sx));
    sort(begin(sy), end(sy));
 
    vector<int> xr(n), yr(n);
    for (int i = 0; i < n; i++)
    {
        xr[sx[i].second] = i;
        yr[sy[i].second] = i;
    }
 
    vector<int> leftd;
    vector<int> leftu;
    vector<int> rightd;
    vector<int> rightu;
 
    for (int i = 0; i < n; i++)
    {
 
        if ((xr[i] < n / 2) && (yr[i] < n / 2))
        {
            leftd.push_back(i + 1);
        }
        else if ((xr[i] < n / 2) && !(yr[i] < n / 2))
            leftu.push_back(i + 1);
        else if (!(xr[i] < n / 2) && (yr[i] < n / 2))
            rightd.push_back(i + 1);
        else
            rightu.push_back(i + 1);
    }
 
    int sz1 = leftd.size();
    int sz2 = leftu.size();
 
    for (int i = 0; i < sz1; i++)
    {
        cout << leftd[i] << " " << rightu[i] << "
";
    }
 
    for (int i = 0; i < sz2; i++)
        cout << leftu[i] << " " << rightd[i] << "
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
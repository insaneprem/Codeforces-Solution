#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool check(int height, int w, int k, vector<int> &arr)
{
    int n = arr.size();
    vector<int> brr(n + 1, 0);
    int curradd = 0;
    int op = 0;
 
    for (int i = 0; i < n; i++)
    {
        curradd += brr[i];
        int currheight = arr[i] + curradd;
 
        if (currheight < height)
        {
            int diff = height - currheight;
            op += diff;
            
            if (op > k) return false;
            
            curradd += diff;
            brr[min(i + w,n)] -= diff;
        }
    }
 
    return op <= k;
}
 
void solve()
{
    int n, m, w;
    cin >> n >> m >> w;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int l = 0, r = 1e18;
 
    while (l <= r)
    {
        int mid = (l + r) >> 1;
 
        if (check(mid, w, m, arr))
            l = mid + 1;
        else
            r = mid - 1;
    }
 
    cout << r;
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
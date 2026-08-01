#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n, k;
    cin >> n >> k;
 
    string str;
    cin >> str;
 
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    int maxsum = 0, currsum = 0;
    for (int i = 0; i < n; i++)
    {
        if ((str[i] == '1'))
        {
            currsum = max(arr[i], currsum + arr[i]);
            maxsum = max(maxsum, currsum);
        }
        else
        {
            currsum = 0;
        }
    }
 
    if (maxsum > k)
    {
        cout << "NO";
        return;
    }
 
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            vec.push_back(i);
    }
 
    if (vec.size() == 0)
    {
        if (maxsum != k)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES
";
            for (auto i : arr)
                cout << i << " ";
        }
        return;
    }
 
    int pivot = vec[0];
    int left = 0, right = 0, sum = 0;
 
    int idx = pivot - 1;
    while (idx >= 0 && str[idx] == '1')
    {
        sum += arr[idx];
        left = max(left, sum);
        idx--;
    }
 
    sum = 0;
    idx = pivot + 1;
 
    while (idx < n && str[idx] == '1')
    {
        sum += arr[idx];
        right = max(right, sum);
        idx++;
    }
 
    int val = (k - left - right);
    const int NEG_INF = -1e18;
    vector<int> ans(n);
 
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '1')
        {
            ans[i] = arr[i];
        }
        else
        {
            if (i == pivot){
                ans[i] = val;
            }
            else ans[i] = NEG_INF;
        }
    }
 
    cout << "YES
";
    for (auto i : ans)
        cout << i << " ";
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
 
    vector<int> arr(n);
    int tsum = 0;
    multiset<int> front, back;
    for (auto &i : arr)
    {
        cin >> i;
        tsum += i;
        back.insert(i);
    }
 
    if (tsum % 2 == 1)
    {
        cout << "NO";
        return;
    }
 
    int currsum = 0;
    int target = tsum / 2;
    for (int i = 0; i < n; i++)
    {
 
        back.erase(back.find(arr[i]));
        currsum += arr[i];
 
        if (currsum == target)
        {
            cout << "YES";
            return;
        }
        else if (currsum < target && back.count(target - currsum))
        {
            cout << "YES";
            return;
        }
        else if (currsum > target && front.count(currsum - target))
        {
            cout << "YES";
            return;
        }
 
        front.insert(arr[i]);
    }
 
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int n;
    cin >> n;
    
    if(n%2 == 0){
      cout<<"NO";
      return;
    }
 
    vector<int> arr(2 * n, -1);
 
    for (int i = 0; i + n < 2 * n; i += 2)
    {
        arr[i] = i + 1;
        arr[i + n] = i + 2;
    }
 
    int num = 2 * n;
    for (int i = 0; i < 2 * n; i++)
    {
        if (arr[i] == -1)
        {
            arr[i] = num;
            arr[i + n] = num - 1;
            num -= 2;
        }
    }
    
    cout<<"YES
";
    for (auto i : arr)
    {
        cout << i << " ";
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
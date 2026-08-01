#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
bool checksqrt(int n)
{
    int val = sqrt(n);
    return val * val == n;
}
 
void solve()
{
    int n;
    cin >> n;
 
    if (checksqrt(n * (n + 1) / 2))
    {
        cout << -1;
        return;
    }
 
    set<int, greater<int>> st;
    for (int i = 1; i <= n; i++)
        st.insert(i);
 
    vector<int> ans;
    int sum = 0;
 
    for (int i = 0; i < n; ++i)
    {
        for (auto num : st)
        {
            if (!checksqrt(sum + num))
            {
                ans.push_back(num);
                sum += num;
                st.erase(num);
                break;
            }
        }
    }
 
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
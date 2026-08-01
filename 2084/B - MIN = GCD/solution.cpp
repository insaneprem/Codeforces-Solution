#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve() {
    int n; 
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) cin >> i;
 
    int mini = *min_element(arr.begin(), arr.end());
    if (count(arr.begin(), arr.end(), mini) > 1) {
        cout << "YES";
        return;
    }
 
    vector<int> brr;
    for (auto i : arr) if (i % mini == 0 && i != mini) brr.push_back(i / mini);
 
    if (brr.empty()) {
        cout << "NO";
        return;
    }
 
    int g = brr[0];
    for (auto i : brr) g = __gcd(g, i);
    cout << (g == 1 ? "YES" : "NO");
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
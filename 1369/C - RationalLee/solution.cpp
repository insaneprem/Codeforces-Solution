#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> gifts(n);
    for (auto &i : gifts) cin >> i;
 
    vector<int> person(k);
    for (auto &i : person) cin >> i;
 
    sort(gifts.begin(), gifts.end());          
    sort(person.begin(), person.end());          
 
    int ans = 0;
 
    for (int i = 0; i < k; i++) {
        ans += gifts[n - 1 - i];
    }
 
    for (int i = 0; i < k; i++) {
        if (person[i] == 1) {
            ans += gifts[n - 1 - i];
        }
    }
 
    int left = 0;
    for (int i = k - 1; i >= 0; i--) {
        if (person[i] > 1) {
            ans += gifts[left];
            left += (person[i] - 1);
        }
    }
 
    cout << ans;
}
 
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "person", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
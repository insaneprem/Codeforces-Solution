#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
const int need = 400000, MAXN = 6000000;
vector<int> primes, primepref, is_prime(MAXN + 1, 1);
 
void precompute()
{
    is_prime[0] = is_prime[1] = 0;
 
    for (int i = 2; i * i <= MAXN; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= MAXN; j += i)
                is_prime[j] = 0;
        }
    }
 
    for (int i = 2; primes.size() < need; i++)
    {
        if (is_prime[i])
            primes.push_back(i);
    }
 
    primepref.resize(primes.size() + 1);
    for (int i = 0; i < primes.size(); i++)
    {
        primepref[i + 1] = primepref[i] + primes[i];
    }
}
 
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr)
        cin >> i;
 
    sort(arr.rbegin(), arr.rend());
 
    vector<int> pref(n + 1);
    for (int i = 0; i < n; i++)
        pref[i + 1] = pref[i] + arr[i];
 
    int val = 0;
    while (val <= n && pref[val] >= primepref[val])
        val++;
 
    cout << (n - (val - 1));
}
 
signed main()
{
    // Humare saath Shree Raghunath to kisi baat ki chinta nahi
 
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    precompute();
 
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
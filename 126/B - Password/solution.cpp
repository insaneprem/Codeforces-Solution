#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int MOD1 = 1e9 + 7;
const int MOD2 = 1e9 + 9;
const int p1 = 31;
const int p2 = 37;
int n;
vector<int> occurances;
vector<int> hash1, hash2;
vector<int> pow1, pow2;
string str;
bool check(int len)
{
    string to_match = str.substr(0, len);
 
    int cnt = 0;
    for (int i = len; i < n - 1; i++)
    {
        int currhash1 = (hash1[i] - (hash1[i - len] * pow1[len]) % MOD1 + MOD1) % MOD1;
        int currhash2 = (hash2[i] - (hash2[i - len] * pow2[len]) % MOD2 + MOD2) % MOD2;
 
        if (currhash1 == hash1[len - 1] && currhash2 == hash2[len - 1])
            cnt++;
    }
 
    return cnt >= 1;
}
void bsonans()
{
    if (occurances.empty()) {
        cout << "Just a legend";
        return;
    }
 
    int l = 0, r = occurances.size() - 1;
    int ans = -1;
 
    while (r - l > 1)
    {
        int mid = (l + r) / 2;
        int len = occurances[mid];
 
        if (check(len))
        {
            l = mid;
            ans = len;
        }
        else
        {
            r = mid;
        }
    }
 
    if (check(occurances[r]))
        ans = occurances[r];
    else if (check(occurances[l]))
        ans = occurances[l];
 
    if (ans == -1)
        cout << "Just a legend";
    else
        cout << str.substr(0, ans);
}
 
void solve()
{
    cin >> str;
 
    n = str.size();
 
    hash1.resize(n), hash2.resize(n);
    pow1.resize(n), pow2.resize(n);
    hash1[0] = (str[0] - 'a' + 1), hash2[0] = (str[0] - 'a' + 1);
    pow1[0] = 1, pow2[0] = 1;
 
    for (int i = 1; i < n; i++)
    {
        pow1[i] = (pow1[i - 1] * p1) % MOD1;
        pow2[i] = (pow2[i - 1] * p2) % MOD2;
 
        hash1[i] = ((hash1[i - 1] * p1) + (str[i] - 'a' + 1)) % MOD1;
        hash2[i] = ((hash2[i - 1] * p2) + (str[i] - 'a' + 1)) % MOD2;
    }
 
    for (int len = 1; len < n; len++)
    {
        int Prefixhash1 = hash1[len - 1];
        int Prefixhash2 = hash2[len - 1];
 
        int Suffixhash1 = (hash1[n - 1] - ((hash1[n - 1 - len] * pow1[len]) % MOD1) + MOD1) % MOD1;
        int Suffixhash2 = (hash2[n - 1] - ((hash2[n - 1 - len] * pow2[len]) % MOD2) + MOD2) % MOD2;
 
        if (Prefixhash1 == Suffixhash1 && Prefixhash2 == Suffixhash2)
        {
            occurances.push_back(len);
        }
    }
 
    bsonans();
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
    // cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
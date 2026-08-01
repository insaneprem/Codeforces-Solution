#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
const int MOD1 = 1e9 + 7;
const int MOD2 = 1e9 + 9;
const int MOD3 = 998244353;
const int p1 = 31;
const int p2 = 37;
const int p3 = 41;
 
void solve()
{
    string str, isBad;
    cin >> str >> isBad;
 
    int k, n = str.size();
    cin >> k;
 
    vector<int> hash1(n), hash2(n), hash3(n);
    vector<int> pow1(n), pow2(n), pow3(n);
 
    hash1[0] = hash2[0] = hash3[0] = (str[0] - 'a' + 1);
    pow1[0] = pow2[0] = pow3[0] = 1;
 
    for (int i = 1; i < n; i++)
    {
        pow1[i] = (pow1[i - 1] * p1) % MOD1;
        pow2[i] = (pow2[i - 1] * p2) % MOD2;
        pow3[i] = (pow3[i - 1] * p3) % MOD3;
 
        hash1[i] = (hash1[i - 1] * p1 + (str[i] - 'a' + 1)) % MOD1;
        hash2[i] = (hash2[i - 1] * p2 + (str[i] - 'a' + 1)) % MOD2;
        hash3[i] = (hash3[i - 1] * p3 + (str[i] - 'a' + 1)) % MOD3;
    }
 
    unordered_set<unsigned long long> st;
 
    for (int i = 0; i < n; i++)
    {
        int nb = 0;
        for (int j = i; j < n; j++)
        {
            if (isBad[str[j] - 'a'] == '0')
                nb++;
            if (nb > k)
                break;
 
            int Prefixhash1 = hash1[j];
            int Prefixhash2 = hash2[j];
            int Prefixhash3 = hash3[j];
 
            if (i > 0)
            {
                Prefixhash1 = (Prefixhash1 - (hash1[i - 1] * pow1[j - i + 1]) % MOD1 + MOD1) % MOD1;
                Prefixhash2 = (Prefixhash2 - (hash2[i - 1] * pow2[j - i + 1]) % MOD2 + MOD2) % MOD2;
                Prefixhash3 = (Prefixhash3 - (hash3[i - 1] * pow3[j - i + 1]) % MOD3 + MOD3) % MOD3;
            }
 
            unsigned long long combined = 
                (1ULL * Prefixhash1) * 1000000000000000000ULL + 
                (1ULL * Prefixhash2) * 1000000000ULL + 
                Prefixhash3;
 
            st.insert(combined);
        }
    }
 
    cout << st.size();
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
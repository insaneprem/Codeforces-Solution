#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int p = 31;
const int MOD = 1e9 + 7;
const int p2 = 37;
const int MOD2 = 1e9 + 9;
const int p3 = 43;
const int MOD3 = 998244353;
 
bool ismatch(string text, string pattern, vector<int> &p_power, vector<int> &p_power2, vector<int> &p_power3)
{
    int n = text.size();
    int m = pattern.size();
    if (m == 0)
        return true;
    if (m > n)
        return false;
 
    int pattern_hash = 0, text_hash = 0;
    int pattern_hash2 = 0, text_hash2 = 0;
    int pattern_hash3 = 0, text_hash3 = 0;
 
    for (int i = 0; i < m; i++)
    {
        pattern_hash = (pattern_hash * p + (pattern[i] - 'a' + 1)) % MOD;
        text_hash = (text_hash * p + (text[i] - 'a' + 1)) % MOD;
        pattern_hash2 = (pattern_hash2 * p2 + (pattern[i] - 'a' + 1)) % MOD2;
        text_hash2 = (text_hash2 * p2 + (text[i] - 'a' + 1)) % MOD2;
        pattern_hash3 = (pattern_hash3 * p3 + (pattern[i] - 'a' + 1)) % MOD3;
        text_hash3 = (text_hash3 * p3 + (text[i] - 'a' + 1)) % MOD3;
    }
 
    if (pattern_hash == text_hash &&
        pattern_hash2 == text_hash2 &&
        pattern_hash3 == text_hash3)
        return true;
 
    for (int i = m; i < n; i++)
    {
        text_hash = (text_hash - (p_power[m - 1] * (text[i - m] - 'a' + 1)) % MOD + MOD) % MOD;
        text_hash = (text_hash * p + (text[i] - 'a' + 1)) % MOD;
 
        text_hash2 = (text_hash2 - (p_power2[m - 1] * (text[i - m] - 'a' + 1)) % MOD2 + MOD2) % MOD2;
        text_hash2 = (text_hash2 * p2 + (text[i] - 'a' + 1)) % MOD2;
 
        text_hash3 = (text_hash3 - (p_power3[m - 1] * (text[i - m] - 'a' + 1)) % MOD3 + MOD3) % MOD3;
        text_hash3 = (text_hash3 * p3 + (text[i] - 'a' + 1)) % MOD3;
 
        if (pattern_hash == text_hash &&
            pattern_hash2 == text_hash2 &&
            pattern_hash3 == text_hash3)
            return true;
    }
 
    return false;
}
 
int matchinglen(string s1, string s2, vector<int> &p_power, vector<int> &p_power2, vector<int> &p_power3)
{
    int n = s1.size(), m = s2.size();
    if (n == 0 || m == 0)
        return 0;
 
    vector<int> hash1(n), hash2(m), hash12(n), hash22(m), hash13(n), hash23(m);
    // **FIXED INITIALIZATION HERE:**
    hash1[0] = s1[0] - 'a' + 1;
    hash2[0] = s2[0] - 'a' + 1;
    hash12[0] = s1[0] - 'a' + 1;
    hash13[0] = s1[0] - 'a' + 1;
    hash22[0] = s2[0] - 'a' + 1;
    hash23[0] = s2[0] - 'a' + 1;
 
    for (int i = 1; i < n; i++)
    {
        hash1[i] = ((hash1[i - 1] * p) + (s1[i] - 'a' + 1)) % MOD;
        hash12[i] = ((hash12[i - 1] * p2) + (s1[i] - 'a' + 1)) % MOD2;
        hash13[i] = ((hash13[i - 1] * p3) + (s1[i] - 'a' + 1)) % MOD3;
    }
    for (int i = 1; i < m; i++)
    {
        hash2[i] = ((hash2[i - 1] * p) + (s2[i] - 'a' + 1)) % MOD;
        hash22[i] = ((hash22[i - 1] * p2) + (s2[i] - 'a' + 1)) % MOD2;
        hash23[i] = ((hash23[i - 1] * p3) + (s2[i] - 'a' + 1)) % MOD3;
    }
 
    for (int len = min(n, m); len >= 1; len--)
    {
        int h1 = hash1[n - 1], h2 = hash12[n - 1], h3 = hash13[n - 1];
        if (n - 1 - len >= 0)
        {
            h1 = (h1 - (hash1[n - 1 - len] * p_power[len]) % MOD + MOD) % MOD;
            h2 = (h2 - (hash12[n - 1 - len] * p_power2[len]) % MOD2 + MOD2) % MOD2;
            h3 = (h3 - (hash13[n - 1 - len] * p_power3[len]) % MOD3 + MOD3) % MOD3;
        }
 
        int p1 = hash2[len - 1], p2h = hash22[len - 1], p3h = hash23[len - 1];
        if (h1 == p1 && h2 == p2h && h3 == p3h)
            return len;
    }
 
    return 0;
}
 
string order_match(string s1, string s2,
                   vector<int> &pp1, vector<int> &pp2, vector<int> &pp3)
{
    if (ismatch(s1, s2, pp1, pp2, pp3))
        return s1;
    int ov = matchinglen(s1, s2, pp1, pp2, pp3);
    return s1 + s2.substr(ov);
}
 
void solve()
{
    vector<string> str(3);
    cin >> str[0] >> str[1] >> str[2];
    sort(str.begin(), str.end());
    str.erase(unique(str.begin(), str.end()), str.end());
 
    int maxlen = 3 * 100005;
    vector<int> pp1(maxlen), pp2(maxlen), pp3(maxlen);
    pp1[0] = pp2[0] = pp3[0] = 1;
    for (int i = 1; i < maxlen; i++)
    {
        pp1[i] = (pp1[i - 1] * p) % MOD;
        pp2[i] = (pp2[i - 1] * p2) % MOD2;
        pp3[i] = (pp3[i - 1] * p3) % MOD3;
    }
 
    vector<string> ms;
    int sz = str.size();
    if (sz > 1)
    {
        vector<bool> isub(sz);
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if (i != j && ismatch(str[j], str[i], pp1, pp2, pp3))
                {
                    isub[i] = true;
                    break;
                }
            }
        }
        for (int i = 0; i < sz; i++)
            if (!isub[i])
                ms.push_back(str[i]);
    }
    else
    {
        ms = str;
    }
 
    int n = ms.size();
    if (n <= 1)
    {
        cout << (n == 0 ? 0 : ms[0].length()) << "
";
        return;
    }
    if (n == 2)
    {
        string a = order_match(ms[0], ms[1], pp1, pp2, pp3);
        string b = order_match(ms[1], ms[0], pp1, pp2, pp3);
        cout << min(a.length(), b.length()) << "
";
        return;
    }
 
    int ans = INT_MAX;
    vector<int> idx = {0, 1, 2};
    do
    {
        string m0 = order_match(ms[idx[0]], ms[idx[1]], pp1, pp2, pp3);
        m0 = order_match(m0, ms[idx[2]], pp1, pp2, pp3);
        ans = min(ans, (int)m0.length());
    } while (next_permutation(idx.begin(), idx.end()));
 
    cout << ans;
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
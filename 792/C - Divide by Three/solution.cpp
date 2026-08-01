#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
string eraseIndex(string s, vector<int> idx) {
    sort(idx.begin(), idx.end(), greater<int>());
    for (auto i : idx) {
        if (i < s.length()) {
            s.erase(s.begin() + i);
        }
    }
    return s;
}
string removeLeading(string s) {
    if (s.empty()) return "";
    int i = 0;
    
    while (i + 1 < s.size() && s[i] == '0') i++;
    
    return s.substr(i);
}
 
void solve() {
    string str;
    cin >> str;
 
    int n = str.size();
    vector<int> mod1, mod2;
    int sum = 0;
    bool has_zero = false;
 
    for (int i = 0; i < n; i++) {
        int dig = str[i] - '0';
 
        if (dig == 0) has_zero = true;
        
        if (dig % 3 == 1) mod1.push_back(i);
        if (dig % 3 == 2) mod2.push_back(i);
        sum += dig;
    }
 
    int rem = sum % 3;
 
    if (rem == 0) {
        cout << str;
        return;
    }
 
    string cand1 = "", cand2 = "";
 
    if (rem == 1) {
        if (!mod1.empty()) {
            cand1 = eraseIndex(str, {mod1.back()});
        }
        if (mod2.size() >= 2) {
            cand2 = eraseIndex(str, {mod2.back(), mod2[mod2.size() - 2]});
        }
    } else { 
        if (!mod2.empty()) {
            cand1 = eraseIndex(str, {mod2.back()});
        }
        if (mod1.size() >= 2) {
            cand2 = eraseIndex(str, {mod1.back(), mod1[mod1.size() - 2]});
        }
    }
 
    
    cand1 = removeLeading(cand1);
    cand2 = removeLeading(cand2);
 
    string best_ans;
    if (cand1.size() > cand2.size()) {
        best_ans = cand1;
    } else {
        best_ans = cand2;
    }
 
    if (!best_ans.empty()) {
        cout << best_ans;
    } else if (has_zero) {
        cout << "0";
    } else {
        cout << -1;
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
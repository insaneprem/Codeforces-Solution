#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
    int totalCakeNeeded, timeperbatch, cakeperbatch, ovenbuildtime;
    cin >> totalCakeNeeded >> timeperbatch >> cakeperbatch >> ovenbuildtime;
 
    int batchreq = (totalCakeNeeded + cakeperbatch - 1) / cakeperbatch;
    int timereq1 = batchreq * timeperbatch;
 
    int batchtillOven = ovenbuildtime / timeperbatch;
    int caketillOven = batchtillOven * cakeperbatch;
 
    int remCakes = max(0LL, totalCakeNeeded - caketillOven);
 
    cakeperbatch *= 2;
    int remcakebatch = (remCakes + cakeperbatch - 1) / cakeperbatch;
    int remCakesTime = remcakebatch * timeperbatch;
 
    int timewithoven = ovenbuildtime + remCakesTime;
 
    if (timewithoven < timereq1)
        cout << "YES";
    else
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
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
	int n, k;
	cin >> n >> k;
 
	map<int, int> tfreq;
 
	vector<int> arr(n);
	for (auto &i : arr)
		cin >> i, tfreq[i]++;
 
	map<int, int> mp;
	int ans = 0;
 
	for (int i = 0; i < n; i++)
	{
		mp[arr[i]]++;
		if (arr[i] % k == 0)
		{
			ans += ((mp[arr[i] / k] - (arr[i] == (arr[i]/k))) * (tfreq[arr[i] * k] - mp[arr[i] * k]));
		}
	}
 
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
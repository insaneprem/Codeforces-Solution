#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
	string start = "1";
	string zeros = "";
	int n;
	cin >> n;
 
	vector<string> arr(n);
	for (auto &i : arr)
		cin >> i;
 
	for (auto i : arr)
	{
		if(i == "0") {
			cout<<0;
			return;
		}
		int zerocnt = 0, onecnt = 0;
		for (auto j : i)
		{
			if (j == '0')
				zerocnt++;
			else if (j == '1')
				onecnt++;
		}
 
		int sz = i.size();
 
		if (zerocnt == sz - 1 && onecnt == 1)
			zeros += string(zerocnt, '0');
		else
			start = i;
	}
 
	cout << start << zeros;
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
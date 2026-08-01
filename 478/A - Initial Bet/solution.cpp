#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
 
	int val = a + b + c + d + e;
 
	if (val % 5 == 0 && val/5>0)
		cout << val / 5;
	else
		cout << -1;
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
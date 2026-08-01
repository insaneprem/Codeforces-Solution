#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
void solve()
{
	int n, k;
	cin >> n >> k;
 
	if (k > ((n * n) + 1) / 2)
	{
		cout << "NO";
		return;
	}
 
	vector<vector<char>> grid(n, vector<char>(n, 'S'));
 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (k)
			{
				if (i % 2 == 0 && j % 2 == 0)
					grid[i][j] = 'L', k--;
				else if (i % 2 == 1 && j % 2 == 1)
					grid[i][j] = 'L', k--;
 
			}
		}
	}
 
	cout << "YES
";
 
	for (auto i : grid)
	{
		for (auto j : i)
			cout << j ;
		cout << "
";
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
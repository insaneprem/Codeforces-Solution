#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
 
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    int val = 0, top = 0, bottom = n - 1, left = 0, right = n - 1;
 
    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++) grid[top][j] = val++;
        top++;
 
        for (int i = top; i <= bottom; i++) grid[i][right] = val++;
        right--;
 
        for (int j = right; j >= left; j--) grid[bottom][j] = val++;
        bottom--;
 
        for (int i = bottom; i >= top; i--) grid[i][left] = val++;
        left++;
    }
 
    val = n * n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            grid[i][j] = val - grid[i][j];
        }
    }
 
    for (auto row : grid)
    {
        for (auto col : row) cout << col << " ";
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
    cin >> t;
    while (t--)
    {
        solve();
        cout << "
";
    }
}
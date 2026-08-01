#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
const int INF = INT_MAX;
 
struct State
{
    int x, y, cost;
    State(int x, int y, int cost) : x(x), y(y), cost(cost) {}
    bool operator>(const State &other) const
    {
        return cost > other.cost;
    }
};
void solve()
{
    int n, s1, s2;
    cin >> n >> s1 >> s2;
 
    int m1, m2;
    cin >> m1;
    vector<vector<int>> adj1(n + 1);
    for (int i = 0; i < m1; ++i)
    {
        int a, b;
        cin >> a >> b;
        adj1[a].push_back(b);
        adj1[b].push_back(a);
    }
 
    cin >> m2;
    vector<vector<int>> adj2(n + 1);
    for (int i = 0; i < m2; ++i)
    {
        int c, d;
        cin >> c >> d;
        adj2[c].push_back(d);
        adj2[d].push_back(c);
    }
 
    unordered_set<int> safev;
    for (int r = 1; r <= n; r++)
    {
        bool flag = false;
        for (int u : adj1[r])
        {
            for (int v : adj2[r])
            {
                if (u == v)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
        if (flag)
            safev.insert(r);
    }
 
    if (safev.empty())
    {
        cout << -1 << endl;
        return;
    }
 
    priority_queue<State, vector<State>, greater<State>> pq;
    pq.push(State(s1, s2, 0));
 
    unordered_map<int, unordered_map<int, int>> dist;
    dist[s1][s2] = 0;
 
    int mincost = INF;
 
    while (!pq.empty())
    {
        State current = pq.top();
        pq.pop();
 
        if (safev.count(current.x) && current.x == current.y)
        {
            mincost = current.cost;
            break;
        }
 
        if (current.cost > dist[current.x][current.y])
            continue;
 
        for (int u : adj1[current.x])
        {
            for (int v : adj2[current.y])
            {
                int new_cost = current.cost + abs(u - v);
                if (!dist[u].count(v) || new_cost < dist[u][v])
                {
                    dist[u][v] = new_cost;
                    pq.push(State(u, v, new_cost));
                }
            }
        }
    }
 
    if (mincost == INF)
    {
        cout << -1;
    }
    else
    {
        cout << mincost ;
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
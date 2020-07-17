#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
vector<int> G[150001];
vector<bool> vis(150001, false);
int e, v;
void dfs(int s)
{
    vis[s] = true;
    v++;
    e += (G[s].size());
    for (auto c : G[s])
    {
        if (!vis[c])
        {
            // e++;
            dfs(c);
            // e++;
        }
    }
}
int32_t main()
{
    fastio
#ifndef ONLINE_JUDGE
        freopen("F:\\cp\\input.txt", "r", stdin);
    freopen("F:\\cp\\output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    //   memset(vis,false,sizeof(vis));
    bool ok = true;
    for (int i = 0; i < n; i++)
    {

        if (!vis[i])
        {
            v = 0, e = 0;
            dfs(i);
            e /= 2;
            if (v * (v - 1) / 2 != e)
            {
                ok = false;
                break;
            }
        }
    }
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}

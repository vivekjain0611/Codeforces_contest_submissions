#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
int32_t main()
{
    fastio
#ifndef ONLINE_JUDGE
        freopen("F:\\cp\\input.txt", "r", stdin);
    freopen("F:\\cp\\output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    vector<int> G[n + 2];
    for (int i = 1; i <= n; i++)
    {
        G[i].push_back(i - 1);
        G[i].push_back(i + 1);
        int x;
        cin >> x;
        G[i].push_back(x);
    }
    vector<bool> vis(n + 2, false);
    vector<int> dis(n + 2);
    queue<int> q;
    q.push(1);
    vis[1] = true;
    dis[1] = 0;
    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        for (int c : G[p])
        {
            if (!vis[c])
            {
                dis[c] = dis[p] + 1;
                vis[c] = true;
                q.push(c);
            }
        }
    }
    for (int i = 1; i <= n; i++)
        cout << dis[i] << " ";
    return 0;
}

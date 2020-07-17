#include <bits/stdc++.h>
using namespace std;
//Topological Sorting 
// DSU where each set contains food items of equal score
// https://codeforces.com/contest/1131/problem/D
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
// const int N = 2002;
struct DSU
{
    int connected;
    int par[2002];
    int sz[2002];
    void initialize(int n)
    {
        // par.resize(n);
        // sz.resize(n);
        for (int i = 0; i < n; i++)
        {
            par[i] = i;
            sz[i] = 1;
        }

        connected = n;
    }

    int find(int v)
    {
        if (v == par[v])
            return v;
        return par[v] = find(par[v]);
    }

    void unite(int a, int b)
    {
        a = find(a);
        b = find(b);

        if (a == b)
            return;

        if (sz[a] < sz[b])
            swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }
};

DSU dsu;
int n, m;

vector<string> vec(2002);
int32_t main()
{
    fastio
#ifndef ONLINE_JUDGE
        freopen("F:\\cp\\input.txt", "r", stdin);
    freopen("F:\\cp\\output.txt", "w", stdout);
#endif
    //   int n,m;
    cin >> n >> m;
    vec.resize(n);
    dsu.initialize(n + m);
    for (auto &s : vec)
    {
        cin >> s;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vec[i][j] == '=')
            {
                dsu.unite(i, j + n);
            }
        }
    }
    vector<int> indeg(n + m, 0), G[n + m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int u = dsu.find(i);
            int v = dsu.find(j + n);
            if (vec[i][j] == '<')
            {
                G[u].push_back(v);
                indeg[v]++;
            }
            else if (vec[i][j] == '>')
            {
                G[v].push_back(u);
                indeg[u]++;
            }
        }
    }

    queue<int> q;
    vector<int> ans(n + m, 1);

    for (int i = 0; i < n + m; i++)
    {
        if (indeg[i] == 0)
            q.push(i);
    }

    int cnt = 0;

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        cnt++;
        for (auto x : G[p])
        {
            indeg[x]--;
            if (indeg[x] == 0)
            {
                q.push(x);
                ans[x] = ans[p] + 1;
            }
        }
    }

    if (cnt < n + m)
        cout << "No";

    else
    {
        for (int i = 0; i < n + m; i++)
            ans[i] = ans[dsu.find(i)];
        cout << "Yes\n";
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
        for (int i = n; i < n + m; i++)
            cout << ans[i] << " ";
    }
    return 0;
}

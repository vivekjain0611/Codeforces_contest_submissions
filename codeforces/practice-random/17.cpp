#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
const int N = 2001;
struct DSU
{
    int connected;
    int par[N];
    int sz[N];
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
        connected--;
        if (sz[a] < sz[b])
            swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }
};
DSU dsu;
int32_t main()
{
    fastio
#ifndef ONLINE_JUDGE
        freopen("F:\\cp\\input.txt", "r", stdin);
    freopen("F:\\cp\\output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    dsu.initialize(n);
    int k;
    cin >> k;
    while (k--)
    {
        int x, y;
        cin >> x >> y;
        dsu.unite(x - 1, y - 1);
    }

    int m;
    cin >> m;
    while (m--)
    {
        int x, y, a, b;
        cin >> x >> y;
        a = dsu.find(x - 1);
        b = dsu.find(y - 1);
        if (a == b)
            dsu.sz[a] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (dsu.find(i) == i)
        {
            ans = max(ans, dsu.sz[i]);
        }
    }
    cout << ans << endl;
    return 0;
}

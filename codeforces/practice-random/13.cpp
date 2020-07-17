#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define int long long int
#define dbg(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
const int N = 26;
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
    dsu.initialize(26);
    int n;
    cin >> n;
    vector<int> f(26, 0);
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        f[s[0] - 'a'] = 1;
        for (int i = 1; i < s.size(); i++)
        {
            dsu.unite(s[0] - 'a', s[i] - 'a');
            f[s[i] - 'a'] = 1;
        }
    }
    int a = 0;
    for (int i : f)
    {
        if (i == 0)
        {
            a++;
        }
    }
    cout << dsu.connected - a << endl;
    return 0;
}

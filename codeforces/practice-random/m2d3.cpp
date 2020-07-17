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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> in(n, 0);
    vector<int> G[n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] == 2 * v[i])
            {
                G[i].push_back(j);
                in[j]++;
            }
            else if (v[i] % 3 == 0 && v[i] / 3 == v[j])
            {
                G[i].push_back(j);
                in[j]++;
            }
        }
    }
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (in[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int p = q.front();
        q.pop();
        cout << v[p] << " ";
        for (auto c : G[p])
        {
            in[c]--;
            if (in[c] == 0)
            {
                q.push(c);
            }
        }
    }
    return 0;
}

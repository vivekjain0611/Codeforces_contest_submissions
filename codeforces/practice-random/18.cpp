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
    vector<int> G[26];
    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &s : v)
        cin >> s;
    bool ans = true;
    vector<int> indeg(26, 0);
    for (int i = 0; i < n - 1; i++)
    {
        string a, b;
        a = v[i];
        b = v[i + 1];

        for (int i = 0; i < a.size(); i++)
        {
            if (i == b.size())
            {
                ans = false;
                break;
            }
            else if (a[i] != b[i])
            {
                G[a[i] - 'a'].push_back(b[i] - 'a');
                indeg[b[i] - 'a']++;
                break;
            }
        }
    }

    if (!ans)
    {
        cout << "Impossible\n";
        return 0;
    }

    vector<char> p;

    queue<int> q;
    for (int i = 0; i < 26; i++)
    {
        if (indeg[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int s = q.front();
        p.push_back(s + 'a');
        q.pop();

        for (auto i : G[s])
        {
            indeg[i]--;
            if (!indeg[i])
            {
                q.push(i);
            }
        }
    }

    if (p.size() < 26)
    {
        cout << "Impossible\n";
        return 0;
    }
    else
    {
        for (char x : p)
        {
            cout << x;
        }
    }

    return 0;
}

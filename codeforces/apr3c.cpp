//greedy approach to color all cells such that all colors are used ..
//we can color Li consecutive blocks 
#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define M 1000000007
#define pb push_back
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m, sum = 0;
    cin >> n >> m;
    vector<int> L(m), ans(m);
    for (int i = 0; i < m; i++)
    {
        cin >> L[i];
        sum += L[i];
    }
    if (sum < n)
    {
        cout << "-1";
        return 0;
    }

    for (int i = 1; i <= m; i++)
    {
        ans[i - 1] = i;
        if (i + L[i - 1] - 1 > n)
        {
            cout << "-1";
            return 0;
        }
    }
    vector<int> sfx(m + 1, 0);
    for (int i = m - 1; i >= 0; i--)
    {
        sfx[i] = sfx[i + 1] + L[i];
    }

    for (int i = m; i > 0; i--)
    {
        ans[i - 1] = max(i, n - sfx[i - 1] + 1);
    }

    for (int x : ans)
        cout << x << " ";
    return 0;
}

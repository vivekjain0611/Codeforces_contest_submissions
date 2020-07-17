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
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> param;
        for (int i = 0; i < n; i++)
        {
            int ai, bi;
            cin >> ai >> bi;
            param.push_back({ai, bi});
        }
        vector<int> prevkill(n, 0);
        if (param[0].first > param[n - 1].second)
        {
            prevkill[0] = param[0].first - param[n - 1].second;
        }

        for (int i = 1; i < n; i++)
        {
            if (param[i].first > param[i - 1].second)
            {
                prevkill[i] = param[i].first - param[n - 1].second;
            }
        }
        int total = 0;
        for (int i : prevkill)
            total += i;

        int ans = INT_MAX;

        for (int i = 1; i < n; i++)
        {
            if (ans > (param[i].first + total - prevkill[i]))
            {
                ans = param[i].first + total - prevkill[i];
            }
        }

        cout << ans << endl;
    }
}
